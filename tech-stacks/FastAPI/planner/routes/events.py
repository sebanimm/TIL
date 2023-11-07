from fastapi import APIRouter, Body, HTTPException, status
from typing import Annotated
from models.events import Event


event_router = APIRouter(tags=["Events"])

events: list[Event] = []


@event_router.get("/", response_model=list[Event])
async def retrieve_all_events():
    return events


@event_router.get("/{id}", response_model=Event)
async def retrieve_event(id: int):
    for event in events:
        if event.id == id:
            return event

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Event with supplied ID doesn't exist.",
    )


@event_router.post("/new")
async def create_server(body: Annotated[Event, Body()]):
    events.append(body)

    return {"message": "Event created successfully"}


@event_router.delete("/{id}")
async def delete_event(id: int):
    for event in events:
        if event.id == id:
            events.remove(event)

            return {"message": "Event deleted successfully"}

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Event with supplied ID doesn't exist.",
    )


@event_router.delete("/")
async def delete_all_events():
    events.clear()

    return {"message": " Events deleted successfully."}

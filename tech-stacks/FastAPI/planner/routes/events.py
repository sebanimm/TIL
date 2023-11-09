from fastapi import APIRouter, Depends, Body, HTTPException, status
from typing import Annotated
from sqlmodel import Session, select

from database.connection import get_session
from models.events import Event, EventUpdate


event_router = APIRouter(tags=["Events"])

events: list[Event] = []


@event_router.get("/", response_model=list[Event])
async def retrieve_all_events(session: Annotated[Session, Depends(get_session)]):
    statement = select(Event)
    events = session.exec(statement).all()

    return events


@event_router.get("/{id}", response_model=Event)
async def retrieve_event(id: int, session: Annotated[Session, Depends(get_session)]):
    event = session.get(Event, id)

    if event:
        return event

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Event with supplied ID doesn't exist.",
    )


@event_router.post("/new")
async def create_server(
    new_event: Annotated[Event, Body()],
    session: Annotated[Session, Depends(get_session)],
):
    session.add(new_event)
    session.commit()
    session.refresh(new_event)

    return {"message": "Event created successfully"}


@event_router.put("/edit/{id}", response_model=Event)
async def update_event(
    id: int, new_data: EventUpdate, session: Annotated[Session, Depends(get_session)]
):
    event = session.get(Event, id)

    if event:
        event_data = new_data.dict(exclude_unset=True)

        for key, value in event_data.items():
            setattr(event, key, value)

        session.add(event)
        session.commit()
        session.refresh(event)

        return event

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Event with supplied ID doesn't exist",
    )


@event_router.delete("/")
async def delete_all_events():
    events.clear()

    return {"message": " Events deleted successfully."}


@event_router.delete("/delete/{id}")
async def delete_event(id: int, session: Annotated[Session, Depends(get_session)]):
    event = session.get(Event, id)

    if event:
        session.delete(event)
        session.commit()

        return {"message": "Event deleted successfully."}

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Event with supplied ID doesn't exist",
    )

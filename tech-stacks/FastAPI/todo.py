from typing import Annotated
from fastapi import APIRouter, Path, Query
from model import Todo

todo_router = APIRouter()

todo_list: list[Todo] = []


@todo_router.post("/todo")
async def add_todo(todo: Todo) -> dict:
    todo_list.append(todo)
    return {"message": "Todo added successfully"}


@todo_router.get("/todo")
async def retrieve_todos() -> dict:
    return {"todos": todo_list}


@todo_router.get("/todo/{todo_id}")
async def get_single_todo(todo_id: Annotated[int, Path()]) -> dict:
    for todo in todo_list:
        if todo.id == todo_id:
            return {"todo": todo}
    return {"message": "Todo with supplied ID doesn't exist."}


@todo_router.get("/query/")
async def query_route(q: Annotated[str | None, Query()] = None):
    return q

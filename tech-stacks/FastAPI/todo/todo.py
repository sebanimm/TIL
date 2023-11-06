from typing import Annotated
from fastapi import APIRouter, Path, HTTPException, status
from model import Todo, TodoItem, TodoItems

todo_router = APIRouter()

todo_list: list[Todo] = []


@todo_router.post("/todo")
async def add_todo(todo: Todo) -> dict:
    todo_list.append(todo)

    return {"message": "Todo added successfully"}


@todo_router.get("/todo", response_model=TodoItems)
async def retrieve_todos() -> dict:
    return {"todos": todo_list}


@todo_router.get("/todo/{todo_id}")
async def get_single_todo(todo_id: Annotated[int, Path()]) -> dict:
    for todo in todo_list:
        if todo.id == todo_id:
            return {"todo": todo}

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Todo with supplied ID doesn't exist.",
    )


@todo_router.put("/todo/{todo_id}")
async def update_todo(
    todo_data: TodoItem,
    todo_id: Annotated[int, Path(title="The ID for todo in todo to be updated")],
):
    for todo in todo_list:
        if todo.id == todo_id:
            todo.item = todo_data.item
            return {"message": "Todo updated successfully."}

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Todo with supplied ID doesn't exist.",
    )


@todo_router.delete("/todo/{todo_id}")
async def delete_single_todo(todo_id: int):
    for i in range(len(todo_list)):
        todo = todo_list[i]
        if todo.id == todo_id:
            todo_list.pop(i)
            return {"message": "Todo deleted successfully."}

    raise HTTPException(
        status_code=status.HTTP_404_NOT_FOUND,
        detail="Todo with supplied ID doesn't exist.",
    )


@todo_router.delete("/todo")
async def delete_all_todo():
    todo_list.clear()

    return {"message": "All todos deleted successfully."}

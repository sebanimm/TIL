from fastapi import FastAPI
from todo.todo import todo_router

app = FastAPI()


@app.get("/")
async def welcome():
    return {"message": "Hello World1"}


app.include_router(todo_router)

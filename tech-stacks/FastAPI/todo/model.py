from pydantic import BaseModel


class Todo(BaseModel):
    id: int
    item: str

    model_config = {
        "json_schema_extra": {
            "examples": [
                {
                    "id": 1,
                    "item": "Example Example Example Example Example",
                },
            ]
        }
    }


class TodoItem(BaseModel):
    item: str

    model_config = {
        "json_schema_extra": {
            "examples": [{"item": "Read the next chapter of the book."}]
        }
    }


class TodoItems(BaseModel):
    todos: list[TodoItem]

    model_config = {
        "json_schema_extra": {
            "examples": [
                {
                    "todos": [
                        {"item": "Example1"},
                        {"item": "Example2"},
                    ]
                }
            ]
        }
    }

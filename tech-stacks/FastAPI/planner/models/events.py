from pydantic import BaseModel


class Event(BaseModel):
    id: int
    title: str
    image: str
    description: str
    tags: list[str]
    location: str

    model_config = {
        "json_schema_extra": {
            "example": {
                "title": "FastAPI",
                "image": "https://avatars.githubusercontent.com/u/102154824?v=4",
                "description": "We will be...",
                "tags": ["python", "fastapi", "book", "launch"],
                "location": "Google",
            }
        }
    }

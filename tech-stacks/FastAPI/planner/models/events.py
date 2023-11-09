from sqlmodel import JSON, SQLModel, Column, Field
from typing import Optional


class Event(SQLModel, table=True):
    id: int = Field(default=None, primary_key=True)
    title: str
    image: str
    description: str
    tags: list[str] = Field(sa_column=Column(JSON))
    location: str

    class Config:
        arbitrary_types_allowed = True
        scheme_extra = {
            "example": {
                "title": "FastAPI",
                "image": "https://avatars.githubusercontent.com/u/102154824?v=4",
                "description": "We will be...",
                "tags": ["python", "fastapi", "book", "launch"],
                "location": "Google",
            }
        }


class EventUpdate(SQLModel):
    title: Optional[str]
    image: Optional[str]
    description: Optional[str]
    tags: Optional[list[str]]
    location: Optional[str]

    class Config:
        scheme_extra = {
            "example": {
                "title": "FastAPI",
                "image": "https://avatars.githubusercontent.com/u/102154824?v=4",
                "description": "We will be...",
                "tags": ["python", "fastapi", "book", "launch"],
                "location": "Google",
            }
        }

from pydantic import BaseModel, EmailStr
from models.events import Event


class User(BaseModel):
    email: EmailStr
    password: str
    events: list[Event] | None = None

    model_config = {
        "json_schema_extra": {
            "example": {
                "email": "gks32114221@gmail.com",
                "username": "asdf",
                "events": [],
            }
        }
    }


class UserSignIn(BaseModel):
    email: EmailStr
    password: str

    model_config = {
        "json_schema_extra": {
            "example": {
                "email": "gks32114221@gmail.com",
                "username": "asdf",
                "events": [],
            }
        }
    }

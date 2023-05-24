package com.example.todolist.controller.dto;

import com.example.todolist.domain.TodoEntity;
import lombok.Getter;

@Getter
public class TodoRequestDto {
    private String content;
    private Boolean completed;

    public TodoEntity toEntity(){
        return TodoEntity
                .builder()
                .content(this.content)
                .completed(this.completed)
                .build();
    }
}

package com.department.school21.controller;

import com.department.school21.controller.dto.SaveStudentRequestDto;
import com.department.school21.service.StudentService;
import lombok.AllArgsConstructor;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@AllArgsConstructor
@RestController
public class StudentController {
    private final StudentService studentService;

    @PostMapping("/api/students")
    public Long createStudent(@RequestBody SaveStudentRequestDto requestDto) {
        return studentService.save(requestDto);
    }
}

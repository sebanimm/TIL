package com.haha.hellospring.controller;

import com.haha.hellospring.domain.Student;
import com.haha.hellospring.service.StudentService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;

@Controller
public class StudentController {
    private final StudentService service;

    public StudentController(StudentService service) {
        this.service = service;
    }

    @Autowired
    public StudentService getService() {
        return service;
    }

    @GetMapping("/students/new")
    public String createForm() {
        return "students/createStudentForm";
    }

    @PostMapping("/students/new")
    public String create(StudentForm form) {
        // 학생들 값을 저장하도록
        Student student = new Student();
        student.setId(form.getId());
        student.setName(form.getName());
        // service를 부른다
        service.edit(student);
        return "redirect:/";
    }
}

package com.department.school21.controller;

import com.department.school21.controller.dto.SaveDepartmentRequestDto;
import com.department.school21.service.DepartmentService;
import lombok.AllArgsConstructor;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@AllArgsConstructor
@RestController
public class DepartmentController {
    private final DepartmentService departmentService;

    @PostMapping("/api/departments")
    public Long createDept(@RequestBody SaveDepartmentRequestDto requestDto) {
        return departmentService.save(requestDto);
    }
}

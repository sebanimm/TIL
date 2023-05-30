package com.department.school21.controller.dto;

import com.department.school21.domain.Gender;
import com.department.school21.domain.Student;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@NoArgsConstructor
@AllArgsConstructor
@Data
public class SaveStudentRequestDto {
    private Long id;
    private String name;
    private Gender gender;
    private Long departmentId;

    public Student toEntity() {
        return Student.builder().id(this.id).name(this.name).gender(this.gender).build();
    }
}

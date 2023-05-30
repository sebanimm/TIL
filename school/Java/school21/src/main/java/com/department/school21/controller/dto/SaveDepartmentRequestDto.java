package com.department.school21.controller.dto;

import com.department.school21.domain.Department;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class SaveDepartmentRequestDto {
    private String name;
    private Long personnel;

    public Department toEntity() {
        return Department.builder().name(this.name).personnel(this.personnel).build();
    }
}

package com.department.school21.repository;

import com.department.school21.domain.Department;
import org.springframework.data.jpa.repository.JpaRepository;

public interface DepartmentJpaRepository extends JpaRepository<Department, Long> {
}

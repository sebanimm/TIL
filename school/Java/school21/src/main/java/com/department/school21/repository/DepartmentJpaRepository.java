package com.department.school21.repository;

import com.department.school21.domain.Department;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.Optional;

public interface DepartmentJpaRepository extends JpaRepository<Department, Long> {
    Optional<Department> findByName(String name);
}

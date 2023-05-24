package com.department.school21.repository;

import com.department.school21.domain.Student;
import org.springframework.data.jpa.repository.JpaRepository;

public interface StudentJpaRepository extends JpaRepository<Student, Long> {
}

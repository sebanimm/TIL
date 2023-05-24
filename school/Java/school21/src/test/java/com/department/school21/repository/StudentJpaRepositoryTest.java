package com.department.school21.repository;

import com.department.school21.domain.Department;
import com.department.school21.domain.Gender;
import com.department.school21.domain.Student;
import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

import static org.junit.jupiter.api.Assertions.assertEquals;

@SpringBootTest
public class StudentJpaRepositoryTest {
    @Autowired
    private StudentJpaRepository studentJpaRepository;

    @Autowired
    private DepartmentJpaRepository departmentJpaRepository;

    @Test
    public void a() {
        // 0. 학과 객체 만들고 저장
        Department department = Department.builder()
                .name("")
                .personnel(32L)
                .build();
        departmentJpaRepository.save(department);

        // 1. 학생 객체를 만들어야함
        Student student = Student.builder()
                .id(1101L)
                .name("홍길동")
                .gender(Gender.MALE)
                .department(department)
                .build();
        studentJpaRepository.save(student);

        // 3. findAll()
        // 4. 비교분석
        assertEquals(studentJpaRepository.findAll().get(0).getId(), 1101L);
    }
}

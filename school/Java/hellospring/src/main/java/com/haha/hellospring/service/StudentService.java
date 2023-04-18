package com.haha.hellospring.service;

import com.haha.hellospring.domain.Student;
import com.haha.hellospring.repository.MemoryStudentRepository;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class StudentService {
    private MemoryStudentRepository repository;
    //학생등록

    public StudentService(MemoryStudentRepository repository) {
        this.repository = repository;
    }
    public Long edit(Student student) {
        // 1. 학번이 중복되진 않았는지
        validateDuplicateStudent(student);
        // 2. 학생등록
        Student saveStudent = repository.save(student);
        System.out.println(saveStudent.getId());
        return saveStudent.getId();
    }

    private void validateDuplicateStudent(Student student) {
        if (repository.findById(student.getId()) != null) {
            throw new IllegalStateException("이미 등록된 학생입니다.");
        }
    }

    public List<Student> findStudents() {
        return repository.findAll();
    }

    public Student findOne(Long id) {
        return repository.findById(id);
    }

    public Long updateScore(Student student) {
        Student updateStudent = repository.findById(student.getId());
        updateStudent.setScore(student.getScore());
        return updateStudent.getId();
    }

}

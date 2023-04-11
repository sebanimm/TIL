package com.haha.hellospring.service;

import com.haha.hellospring.domain.Student;
import com.haha.hellospring.repository.MemoryStudentRepository;
import org.springframework.stereotype.Service;

@Service
public class StudentService {
    private MemoryStudentRepository repository;
    //학생등록

    public StudentService(MemoryStudentRepository repository) {
        this.repository = repository;
    }
    public Long edit(Student student) {
        // 1. 학번이 중복되진 않았는지
        // 2. 학생등록
        Student saveStudent = repository.save(student);
        System.out.println(saveStudent.getId());
        return saveStudent.getId();
    }
}

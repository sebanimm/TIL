package com.haha.hellospring.repository;

import com.haha.hellospring.domain.Student;
import org.springframework.stereotype.Repository;

import java.util.HashMap;
import java.util.Map;

@Repository
public class MemoryStudentRepository {
    private static Map<Long, Student> store = new HashMap<>();

    public Student save(Student student) {
        store.put(student.getId(), student);
        return store.get(student.getId());
    }
}

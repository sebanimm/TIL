package com.haha.hellospring.repository;

import com.haha.hellospring.domain.Student;
import org.springframework.stereotype.Repository;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@Repository
public class MemoryStudentRepository {
    private static Map<Long, Student> store = new HashMap<>();

    public Student save(Student student) {
        store.put(student.getId(), student);
        return store.get(student.getId());
    }

    public Student findById(Long id) {
        return store.get(id);
    }

    public List<Student> findAll() {
        List<Student> list = new ArrayList<>(store.values());
        return list;
    }

}


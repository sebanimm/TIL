package com.department.school21.domain;

import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

import javax.persistence.*;

@Getter
@NoArgsConstructor
@Entity
public class Student {
    @Id
    private Long id;

    @Column(nullable = false)
    private String name;

    @Column(nullable = false)
    @Enumerated(EnumType.STRING)
    private Gender gender;

    @ManyToOne
    private Department department;

    @Builder
    public Student(Long id, String name, Gender gender, Department department) {
        this.id = id;
        this.name = name;
        this.gender = gender;
        this.department = department;
    }

    public void chooseDept(Department department) {
        this.department = department;
    }
}

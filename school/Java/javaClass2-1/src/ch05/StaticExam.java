package ch05;

public class StaticExam {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        // System.out.println(Student.group);

        s1.showInfo();
        Student.group = "Embedded";
        s2.showInfo();
        s3.showInfo();

        // Student.school = "busan";
        // final 변수는 수정불가
    }
}

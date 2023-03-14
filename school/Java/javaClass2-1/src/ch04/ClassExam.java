package ch04;

public class ClassExam {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();

        // null 또는 0으로 초기화됨
        System.out.println(s1.name);

        s1.name = "s1";
        s2.name = "s2";
        s3.name = "s3";

        s1.num = 1234;
        s2.num = 2345;
        s3.num = 3456;

        s1.showInfo();
        s2.showInfo();
        s3.showInfo();
    }
}

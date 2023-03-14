package ch07;

public class PrivateExam {
    public static void main(String[] args) {
        Student choi = new Student();
        choi.setName("choi");
        System.out.println(choi.getName());
        System.out.println(Student.getCount());
    }
}

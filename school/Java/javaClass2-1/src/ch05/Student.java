package ch05;

public class Student {
    int age;
    int num;
    String name;
    static String group = "SW";
    final static String school = "Busan Software Meister";
    void study() {
        System.out.println("공부하기");
    }
    void eating() {
        System.out.println("밥먹기");
    }
    void sleeping() {
        System.out.println("잠자기");
    }
    void showInfo() {
        System.out.println("이름은 " + name + " 이고, 나이는 " + age + " 이고, 학번은 " + num + " 입니다.");
        System.out.println("소속학과는 " + group + " 입니다.");
    }
}

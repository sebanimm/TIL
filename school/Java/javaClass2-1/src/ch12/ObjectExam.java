package ch12;

public class ObjectExam {
    public static void main(String[] args) {
        String str1 = "busan";
        String str2 = "busan";
        System.out.println(str1 == str2); // 주소값 비교
        System.out.println(str1.equals(str2)); // 문자열 내용 비교

        String str3 = new String("busan");
        String str4 = new String("busan");
        System.out.println(str3 == str4);
        System.out.println(str3.equals(str4));

        Student s1 = new Student(1, "choi");
        Student s2 = new Student(1, "choi");
        System.out.println(s1 == s2);
        System.out.println(s1.equals(s2));
    }
}

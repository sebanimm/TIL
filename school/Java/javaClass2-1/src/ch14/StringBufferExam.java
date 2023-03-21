package ch14;

public class StringBufferExam {
    public static void main(String[] args) {
        String str1 = "busan ";
        System.out.println(str1.hashCode());
        String str2 = "meister";
        str1 = str1 + str2;
        System.out.println(str1.hashCode()); // 주소가 다른 모습. String 은 동적 할당이 불가능
        System.out.println(str1);

        StringBuffer sb1 = new StringBuffer("busan ");
        StringBuffer sb2 = new StringBuffer("meister");
        System.out.println(sb1.hashCode());
        sb1.append(sb2);
        System.out.println(sb1.hashCode()); // 주소가 같은 모습. StringBuffer를 이용해 동적 할당을 할 수 있다
        System.out.println(sb1);

        sb1.replace(0, 5, "BUSAN"); // 0~5까지 다른 문자열로 대체
        System.out.println(sb1);
        System.out.println(sb1.reverse());
    }
}

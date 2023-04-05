package ch16;

public class NullPointExam {
    public static void main(String[] args) {
        String str = null;
        try {
            System.out.println(str.length());
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

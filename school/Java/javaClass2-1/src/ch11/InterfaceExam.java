package ch11;

public class InterfaceExam {
    public static void main(String[] args) {
        Sound tv = new TV();
        tv.soundUp();
        tv.soundDown();
        // tv.showInfo();
        // Sound 자료형이라 오버라이딩된 애들만 된다
        // tv.equals();
    }
}

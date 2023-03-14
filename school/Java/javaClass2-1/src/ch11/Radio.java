package ch11;

public class Radio implements Sound {
    private int soundLevel;
    @Override
    public void soundUp() {
        soundLevel += 1;
    }

    @Override
    public void soundDown() {
        soundLevel -= 1;
    }

    @Override
    public void showInfo() {

    }
}

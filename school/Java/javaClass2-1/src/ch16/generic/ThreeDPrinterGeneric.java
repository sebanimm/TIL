package ch16.generic;

public class ThreeDPrinterGeneric<T> {
    private T material;

    public T getMaterial() {
        return material;
    }

    public void setMaterial(T material) {
        this.material = material;
    }

    @Override
    public String toString() {
        return "재료는 " + material + " 입니다";
    }
}

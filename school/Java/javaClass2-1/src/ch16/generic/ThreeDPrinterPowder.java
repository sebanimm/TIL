package ch16.generic;

public class ThreeDPrinterPowder {
    private Powder material;

    public Powder getMaterial() {
        return material;
    }

    public void setMaterial(Powder material) {
        this.material = material;
    }

    @Override
    public String toString() {
        return "재료는 " + material + " 입니다";
    }
}

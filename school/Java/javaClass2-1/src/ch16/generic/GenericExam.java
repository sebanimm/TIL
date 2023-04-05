package ch16.generic;

public class GenericExam {
    public static void main(String[] args) {
        Powder powder = new Powder();
        // System.out.println(powder);
        Plastic plastic = new Plastic();
        ThreeDPrinterPowder threeDPrinterPowder = new ThreeDPrinterPowder();
        threeDPrinterPowder.setMaterial(powder);
        System.out.println(threeDPrinterPowder);

        System.out.println("========================");

        ThreeDPrinterObject threeDPrinterObject = new ThreeDPrinterObject();
        threeDPrinterObject.setMaterial(powder);
        threeDPrinterObject.setMaterial(plastic);
        System.out.println(threeDPrinterObject);

        System.out.println("========================");

        ThreeDPrinterGeneric<Plastic> threeDPrinterGeneric = new ThreeDPrinterGeneric();
        threeDPrinterGeneric.setMaterial(plastic);
        System.out.println();

    }
}

package ch09;

public class CarExam {
    public static void main(String[] args) {
        Car k3 = new Car("white", "kia", "k3");

        k3.startCar();
        k3.speedUp();
        k3.speedDown();
        k3.stopCar();

        Taxi taxi = new Taxi("black", "hyundai", "avante");
        taxi.showInfo();
        taxi.meterUp();
        taxi.stopMeter();
    }
}

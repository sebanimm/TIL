package ch09;

public class Car {
    private String color;
    private String company;
    private String model;
    private int speed;
    public Car(String color, String company, String model) {
        this.color = color;
        this.company = company;
        this.model = model;
    }

    void startCar() {
        System.out.println("출발합니다");
        speed += 10;
    }

    public void stopCar() {
        while (speed != 0) {
            speedDown();
        }
        System.out.println("정지합니다");
    }

    public void speedDown() {
        if (speed == 0) {
            return;
        }
        speed -= 10;
        System.out.println("속도를 줄입니다.");
    }

    public void speedUp() {
        if (speed >= 200) {
            System.out.println("현재 최대 속도입니다.");
            return;
        }
        System.out.println("속도를 올립니다.");
        speed += 10;
    }

    public void showInfo() {
        System.out.println("차종은 " + model + " 이고, 색깔은 " + color + " 이고, 제조사는 " + company + " 입니다.");
    }
}

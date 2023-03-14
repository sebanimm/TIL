package ch10;
// 추상화
public abstract class Ship {
    public abstract int maxPassengers();
    public abstract int maxLuggage();
    public void startShip() {
        System.out.println("배가 출항합니다.");
    }
}

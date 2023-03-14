package ch10;

public class MyShip extends Ship{
    private String name;

    public MyShip(String name) {
        this.name = name;
    }

    // 오버라이딩 안하면 오류남 (강제)
    @Override
    public int maxPassengers() {
        return 10;
    }

    @Override
    public int maxLuggage() {
        return 100;
    }


}

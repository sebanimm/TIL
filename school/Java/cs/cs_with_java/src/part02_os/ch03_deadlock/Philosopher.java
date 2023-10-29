package part02_os.ch03_deadlock;

public class Philosopher extends Thread{
    private String name;
    private int number;

    public Philosopher(String name, int number) {
        this.name = name;
        this.number = number;
    }

    @Override
    public void run() {
        // 0.5초 이내 값. 0이면 교착상태
        int randTime = (int)((Math.random() * 1000) + 500);
        try {
            System.out.println(name + " : " + randTime + "ms wait");
            Thread.sleep(randTime);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
        // 왼쪽 포크 획득
        takeFork(number);
        // 오른쪽 포크 획득
        takeFork((number + 1) % 4);
        // 밥 먹기
        System.out.println("꾸익꾸익");
        // 포크 내려놓기 (자원 반납)
        putFork(number);
        putFork((number + 1) % 4);
    }

    public void takeFork(int number) {
        // 공유 영역에서 포크 들고오기
        Fork fork = Table.forks.get(number);
        fork.useFork();
        System.out.println(name + " takes a " + number + " fork");
    }

    public void putFork(int number) {
        Fork fork = Table.forks.get(number);
        fork.unUseFork();
        System.out.println(name + " puts down fork " + number);
    }
}

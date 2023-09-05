package part02_os.ch02_shared;

public class SharedTest {
    public static void main(String[] args) throws InterruptedException {
        ThreadWithR1WaitR2 t1 = new ThreadWithR1WaitR2();
        ThreadWithR2WaitR1 t2 = new ThreadWithR2WaitR1();

        t1.start();
        Thread.sleep(100);
        t2.start();
    }
}

package part02_os.ch01_thread;

public class ThreadDesc implements Runnable{
    @Override
    public void run() {
        for (int i = 100; i >= 0; i--) {
            System.out.println(Thread.currentThread().getName() + " : " + i);
        }
    }
}

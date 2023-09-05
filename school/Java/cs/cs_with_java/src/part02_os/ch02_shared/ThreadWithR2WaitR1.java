package part02_os.ch02_shared;

public class ThreadWithR2WaitR1 extends Thread{
    @Override
    public void run() {
        synchronized (Resources.r2) {
            System.out.println(Thread.currentThread().getName() + " r2 점유 r1 요청");
            synchronized (Resources.r1) {
                System.out.println(Thread.currentThread().getName() + " r1 점유");
                System.out.println("rmx");
            }
        }
    }
}

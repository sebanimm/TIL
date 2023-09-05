package part02_os.ch01_thread;

public class ThreadAsc extends Thread{
    @Override
    public void run() {
        for (int i = 1; i <= 10; i++){
            System.out.println(Thread.currentThread().getName() + " : " + i);
        }
    }
}

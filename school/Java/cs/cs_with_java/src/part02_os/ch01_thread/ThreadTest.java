package part02_os.ch01_thread;

public class ThreadTest {
    public static void main(String[] args) {
        ThreadAsc asc = new ThreadAsc();
        ThreadDesc desc = new ThreadDesc();
        Thread t1 = new Thread(desc);

        asc.start();
        t1.start();
    }
}

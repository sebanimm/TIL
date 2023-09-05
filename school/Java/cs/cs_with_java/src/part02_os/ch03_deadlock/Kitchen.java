package part02_os.ch03_deadlock;

public class Kitchen {
    public static void main(String[] args) {
        // 철학자 4명 생성(쓰레드)
        Philosopher aristotle = new Philosopher("aristotle", 0);
        Philosopher plato = new Philosopher("plato", 1);
        Philosopher socrates = new Philosopher("socrates", 2);
        Philosopher pythagoras = new Philosopher("pythagoras", 3);

        aristotle.start();
        plato.start();
        socrates.start();
        pythagoras.start();
    }
}

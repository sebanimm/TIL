package part02_os.ch03_deadlock;

import java.util.ArrayList;

public class Table {
    static ArrayList<Fork> forks = new ArrayList();
    static {
        forks.add(new Fork());
        forks.add(new Fork());
        forks.add(new Fork());
        forks.add(new Fork());
    }
}

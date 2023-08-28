package part01_structure.ch01_cbt;

public interface CBTInterface {
    void push(Integer value);

    Integer pop();

    MyNode getRoot();

    void bfs(MyNode node);

    void dfs(MyNode node);
}

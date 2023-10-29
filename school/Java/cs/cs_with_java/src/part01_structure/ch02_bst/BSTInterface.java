package part01_structure.ch02_bst;

public interface BSTInterface {
    void add(Integer value);
    Integer remove(Integer value);
    MyNode getRoot();
    void inOrder(MyNode node);
    void preOrder(MyNode node);
    void postOrder(MyNode node);
}

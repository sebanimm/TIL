package part01_structure.ch02_bct;

public class BSTTest {
    public static void main(String[] args) {
        BST bst = new BST();

        bst.add(10);
        bst.add(5);
        bst.add(1);
        bst.add(12);
        bst.add(14);
        bst.add(7);
        bst.add(3);
        bst.add(2);

        bst.remove(5);

        bst.preOrder(bst.getRoot());
    }
}

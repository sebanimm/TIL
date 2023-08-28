package part01_structure.ch02_bct;

public class BST implements BSTInterface {
    MyNode root;
    int count;

    @Override
    public void add(Integer value) {
        MyNode newNode = new MyNode(value);

        if (count == 0) {
            root = newNode;
            count++;
            return;
        }

        // 탐색
        MyNode temp = root;
        while(true) {
            // 왼 자식 비교
            if (newNode.value < temp.value) {
                if (temp.left == null) {
                    temp.left = newNode;
                    break;
                }
                temp = temp.left;
            }
            // 오른 자식 비교
            else {
                if (temp.right == null) {
                    temp.right = newNode;
                    break;
                }
                temp = temp.right;
            }
        }
        count++;
    }

    @Override
    public Integer remove(Integer value) {
        if (count == 0) {
            System.out.println("트리가 비어있음");
            return null;
        } else if (count == 1) {
            int n = root.value;
            root = null;
            count--;
            return n;
        }

        // 탐색 후 삭제
        MyNode temp = root;
        MyNode pre = null;
        while (value != temp.value) {
            // 왼쪽 이동
            if (value < temp.value) {
                pre = temp;
                temp = temp.left;
            }

            // 오른쪽 이동
            else {
                pre = temp;
                temp = temp.right;
            }

            if (temp == null) {
                System.out.println(value + "가 존재하지 않습니다");
                return null;
            }
        }

        // 삭제할 노드 찾기

        // 자식 없음
        if (temp.left == null && temp.right == null) {
            if (temp == root) {
                root = temp.left;
            } else if (pre.left == temp) {
                pre.left = temp.left;
            } else {
                pre.right = temp.left;
            }
        }

        // 자식 1개(자식의 왼쪽)
        else if (temp.right == null) {
            if (temp == root) {
                root = null;
            } else if (pre.left == temp) {
                pre.left = null;
            } else {
                pre.right = null;
            }
        }

        // 자식 1개 (자식의 오른쪽)
        else {
            MyNode replacePre = temp;
            MyNode replaceTemp = replacePre.left;

            // 왼 자식 중 가장 큰 값은 오른쪽 끝
            while(replaceTemp.right != null) {
                replacePre = replaceTemp;
                replaceTemp = replaceTemp.right;
            }
            replacePre.right = replaceTemp.left;
            replaceTemp.left = temp.left;
            replaceTemp.right = temp.right;

            if (temp == root) {
                root = replaceTemp;
            } else if (pre.left == temp) {
                pre.left = replaceTemp;
            } else {
                pre.right = replaceTemp;
            }
        }
        count--;
        return temp.value;
    }

    @Override
    public MyNode getRoot() {
        return root;
    }

    @Override
    public void inOrder(MyNode node) {
        if (node != null) {
            inOrder(node.left);
            System.out.print(node.val ue + " ");
            inOrder(node.right);
        }
    }

    @Override
    public void preOrder(MyNode node) {
        if (node != null) {
            System.out.print(node.value + " ");
            preOrder(node.left);
            preOrder(node.right);
        }
    }

    @Override
    public void postOrder(MyNode node) {
        if (node != null) {
            postOrder(node.left);
            postOrder(node.right);
            System.out.print(node.value + " ");
        }
    }
}

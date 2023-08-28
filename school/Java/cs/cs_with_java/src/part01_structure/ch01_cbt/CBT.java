package part01_structure.ch01_cbt;

import java.util.LinkedList;
import java.util.Queue;

public class CBT implements CBTInterface{
    MyNode root;
    Integer count = 0;

    @Override
    public void push(Integer value) {
        // 1. 노드 생성
        MyNode newNode = new MyNode(value);

        // 2. 트리가 비어 있는가?
        if (count == 0) {
            root = newNode;
            count++;
            return;
        }

        // 3. 위치 탐색
        Queue<MyNode> queue = new LinkedList<>();
        queue.add(root);
        MyNode temp;
        while (true) {
            temp = queue.poll();

            // 왼쪽 자식 확인
            if (temp.left == null) {
                temp.left = newNode;
                break;
            } else {
                queue.add(temp.left);
            }

            // 오른쪽 자식 확인
            if (temp.right == null) {
                temp.right = newNode;
                break;
            } else {
                queue.add(temp.right);
            }
        }
        count++;
    }

    @Override
    public Integer pop() {
        if (count == 0) {
            System.out.println("트리가 비어 있습니다.");
            return null;
        } else if (count == 1) {
            int n = root.value;
            root = null;
            count--;
            return n;
        }

        Queue<MyNode> queue = new LinkedList<>();
        queue.add(root);
        MyNode pre = null;
        MyNode temp = null;

        while(!queue.isEmpty()) {
            temp = queue.poll();
            
            // 왼쪽 and 부모 체크
            if(temp.left != null) {
                pre = temp;
                queue.add(temp.left);
            }

            // 오른쪽 and 부모 체크
            if (temp.right != null) {
                pre = temp;
                queue.add(temp.right);
            }

        }
        if (pre.left.equals(temp)) {
            pre.left = null;
        } else {
            pre.right = null;
        }

        count--;
        return temp.value;
    }

    @Override
    public MyNode getRoot() {
        return root;
    }

    @Override
    public void bfs(MyNode node) {
        if (count == 0) {
            System.out.println("트리가 비어 있습니다.");
            return;
        }

        Queue<MyNode> queue = new LinkedList<>();
        queue.add(node);

        MyNode temp;

        while(!queue.isEmpty()) {
            temp = queue.poll();
            System.out.print(temp.value + " ");

            if (temp.left != null) {
                queue.add(temp.left);
            }

            if (temp.right != null) {
                queue.add(temp.right);
            }
        }
    }

    @Override
    public void dfs(MyNode node) {
        if (count == 0) {
            System.out.println("트리가 비어 있습니다.");
            return;
        }

        if (node != null) {
            System.out.print(node.value + " ");
            dfs(node.left);
            dfs(node.right);
        }
    }
}

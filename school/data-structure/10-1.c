#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct TreeNode
{
  element key;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;
//��ȯ�� Ž���Լ�
TreeNode *search(TreeNode *node, int key)
{
  if (node == NULL)
    return NULL;
  if (key == node->key)
    return node;
  else if (key < node->key)
    return search(node->left, key);
  else
    return search(node->right, key);
}
TreeNode *newNode(int item)
{
  TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
TreeNode *insertNode(TreeNode *node, int key)
{
  //Ž���� ������ ��ġ�� ���ο� ��带 ���� �� ��ȯ
  if (node == NULL)
    return newNode(key);
  //�׷��� ������ ��ȯ������ Ʈ���� ��������.
  else if (key < node->key)
  {
    node->left = insertNode(node->left, key);
  }
  else if (key > node->key)
  {
    node->right = insertNode(node->right, key);
  }
  //����� ��Ʈ ������ ��ȯ
  return node;
}
TreeNode *minNode(TreeNode *node)
{
  TreeNode *cur = node;
  //�� ���� �ּҴܸ� Ž��
  while (cur->left != NULL)
  {
    cur = cur->left;
  }
  return cur;
}
//���� Ž��Ʈ���� Ű�� �־����� Ű�� ����� ��带 �����ϰ�
//���ο� ��Ʈ ��带 ��ȯ�Ѵ�.
TreeNode *deleteNode(TreeNode *root, int key)
{
  // printf("delete �ּ�=%p, key =%d\n",root,key);
  if (root == NULL)
    return root;
  // 1.���� Ű�� ��Ʈ���� ������ ->���ʼ���Ʈ��
  if (key < root->key)
  {
    root->left = deleteNode(root->left, key);
  }
  // 2.���� Ű�� ��Ʈ���� ũ�� -> ������ ����Ʈ��
  else if (key > root->key)
  {
    root->right = deleteNode(root->right, key);
  }
  // 3. Ű�� ��Ʈ�� ������ ��� ����
  else if (key == root->key)
  {
    // 3-1.������尡 �ܸ��̰ų� �ϳ��� ����Ʈ���� ������ ���
    if (root->left == NULL)
    {
      TreeNode *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      TreeNode *temp = root->left;
      free(root);
      return temp;
    }
    // 3-2.������尡 �ΰ��� ����Ʈ���� ������ �ִ� ���
    TreeNode *temp = minNode(root->right); // 22�� �ּҰ�
    //������ȸ�� �İ��� ����
    root->key = temp->key; // 22
    //������ȸ�� �İ� ��� ����
    //	printf("delete [26]�ּ�=%p, key =%d\n",root->right,temp->key);
    root->right = deleteNode(root->right, temp->key); // 26�ּ� ,22
  }
  return root;
}
void inorder(TreeNode *root)
{
  if (root != NULL)
  {
    inorder(root->left);        //���ʼ���Ʈ�� ��ȸ
    printf("[%d] ", root->key); // root ���湮 ���
    inorder(root->right);       //�����ʼ���Ʈ�� ��ȸ
  }
}
int main()
{
  TreeNode *root = NULL;
  TreeNode *tmp = NULL;
  int n;
  root = insertNode(root, 35);
  root = insertNode(root, 18);
  root = insertNode(root, 68);
  root = insertNode(root, 7);
  root = insertNode(root, 26);
  root = insertNode(root, 99);
  root = insertNode(root, 3);
  root = insertNode(root, 12);
  root = insertNode(root, 22);
  root = insertNode(root, 30);

  printf("����Ž��Ʈ�� ������ȸ ��� ���\n");
  inorder(root);
  printf("\n������ ���ڸ� �Է��ϼ���\n");
  scanf("%d", &n);
  // printf("�����ּ� = %p ���� 26��� �� =%p\n",deleteNode(root, 18),root->key);
  deleteNode(root, n);
  printf("����Ž��Ʈ�� ������ȸ ��� ���\n");
  inorder(root);

  // 	if (search (root,n) != NULL) {
  // 		printf("����Ž��Ʈ������ %d�� �߰���\n",n);
  // 	}
  // 	else{
  // 		printf("����Ž��Ʈ������ %d�� �߰߸���\n",n);
  // 	}

  return 0;
}

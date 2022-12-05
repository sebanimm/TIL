#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct TreeNode
{
  element key;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

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
  TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode)); //��� �����Ҵ�
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
  printf("delete �ּ�=%p, key =%d\n", root, key);
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
  else
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
void menu()
{
  printf("\n*-----------------------*\n");
  printf("\n\t1 : Ʈ�� ���\n");
  printf("\n\t2 : ���� ����\n");
  printf("\n\t3 : ���� ����\n");
  printf("\n\t4 : ���� �˻�\n");
  printf("\n\t5 : ����\n");
  printf("\n*-----------------------*\n");
  printf("\n�޴� �Է� >> ");
}
int main()
{
  TreeNode *root = NULL;
  TreeNode *foundedNode = NULL;
  char choice, key;

  root = insertNode(root, 'G');
  insertNode(root, 'I');
  insertNode(root, 'H');
  insertNode(root, 'D');
  insertNode(root, 'B');
  insertNode(root, 'M');
  insertNode(root, 'N');
  insertNode(root, 'A');
  insertNode(root, 'J');
  insertNode(root, 'E');
  insertNode(root, 'Q');

  while (1)
  {
    menu();
    scanf(" %c", &choice);
    switch (choice - '0')
    {
    case 1:
      printf("\t[���� Ʈ�� ���] ");
      inorder(root);
      printf("\n");
      break;
    case 2:
      printf("������ ���ڸ� �Է��ϼ��� : ");
      scanf(" %c", &key);
      insertNode(root, key); //�����Լ� ȣ��;
      break;
    case 3:
      printf("������ ���ڸ� �Է��ϼ��� : ");
      scanf(" %c", &key);
      deleteNode(root, key); //�����Լ� ȣ��
      break;
    case 4:
      printf("ã�� ���ڸ� �Է��ϼ��� : ");
      scanf(" %c", &key);
      foundedNode = search(root, key); //Ž���Լ� ȣ��
      if (foundedNode != NULL)
        printf("\n %c�� ã�ҽ��ϴ�! \n", foundedNode->key);
      else
        printf("\n ���ڸ� ã�� ���߽��ϴ�. \n");
      break;
    case 5:
      return 0;
    default:
      printf("���� �޴��Դϴ�. �޴��� �ٽ� �����ϼ���!\n");
      break;
    }
  }
}

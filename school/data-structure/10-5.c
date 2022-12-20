#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct TreeNode
{
  element data;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

TreeNode *create(int data)
{
  TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
TreeNode *insert(TreeNode *root, int data)
{
  if (root == NULL)
  {
    return create(data);
  }
  else if (data < root->data)
    root->left = insert(root->left, data);
  else
    root->right = insert(root->right, data);
  return root;
}
void postorder(TreeNode *root)
{
  if (root != NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
  }
}
int main()
{
  int n;
  TreeNode *root = NULL;
  while (scanf("%d", &n) != EOF)
  {
    root = insert(root, n);
  }
  postorder(root);
  return 0;
}
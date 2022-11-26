#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode
{
  int data;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

TreeNode *makeRootNode(int data, TreeNode *leftNode, TreeNode *rightNode)
{
  TreeNode *root = (TreeNode *)malloc(sizeof(TreeNode));
  root->data = data;
  root->left = leftNode;
  root->right = rightNode;
  return root;
}

void preorder(TreeNode *root)
{
  if (root != NULL)
  {
    printf("[%d] ", root->data);
    preorder(root->left);
    preorder(root->right);
  }
}

void inorder(TreeNode *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("[%d] ", root->data);
    inorder(root->right);
  }
}

void postorder(TreeNode *root)
{
  if (root != NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("[%d] ", root->data);
  }
}

void main()
{
  TreeNode *n7 = makeRootNode(25, NULL, NULL);
  TreeNode *n6 = makeRootNode(16, NULL, NULL);
  TreeNode *n4 = makeRootNode(1, NULL, NULL);
  TreeNode *n3 = makeRootNode(20, n6, n7);
  TreeNode *n2 = makeRootNode(4, n4, NULL);
  TreeNode *n1 = makeRootNode(15, n2, n3);

  printf("\n중위 순회=");
  inorder(n1);

  printf("\n전위 순회=");
  preorder(n1);

  printf("\n후위 순회=");
  postorder(n1);
  free(n1);
  free(n2);
  free(n3);
  free(n4);
  free(n6);
  free(n7);
}
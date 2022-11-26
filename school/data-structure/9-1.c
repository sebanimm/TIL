#include <stdio.h>

void preorder(char t[], int i, int size)
{
  if (i > size || t[i] == NULL)
    return;
  printf("%c ", t[i]);
  preorder(t, i * 2, size);
  preorder(t, i * 2 + 1, size);
}
void inorder(char t[], int i, int size)
{
  if (i > size || t[i] == NULL)
    return;
  inorder(t, i * 2, size);
  printf("%c ", t[i]);
  inorder(t, i * 2 + 1, size);
}
void postorder(char *t, int i, int size)
{
  if (i > size || t[i] == NULL)
    return;
  postorder(t, i * 2, size);
  postorder(t, i * 2 + 1, size);
  printf("%c ", t[i]);
}
int main()
{
  char tree[] = {0, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 0, 0, 'H', 'I', 0, 'J', 'K', 'L'};
  int size = 16;
  printf("\n<<���� Ž��>>\n");
  preorder(tree, 1, size);
  printf("\n<<���� Ž��>>\n");
  inorder(tree, 1, size);
  printf("\n<<���� Ž��>>\n");
  postorder(tree, 1, size);
}
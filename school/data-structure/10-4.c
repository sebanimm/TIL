#include <stdio.h>

void preorder(char tree[], int key)
{
  if (key > 27)
    return;
  if (tree[key] != NULL)
  {
    printf("%c", tree[key]);
    preorder(tree, key * 2);
    preorder(tree, key * 2 + 1);
  }
}

void inorder(char tree[], int key)
{
  if (key > 27)
    return;
  if (tree[key] != NULL)
  {
    inorder(tree, key * 2);
    printf("%c", tree[key]);
    inorder(tree, key * 2 + 1);
  }
}

void keytorder(char tree[], int key)
{
  if (key > 27)
    return;
  if (tree[key] != NULL)
  {
    keytorder(tree, key * 2);
    keytorder(tree, key * 2 + 1);
    printf("%c", tree[key]);
  }
}

int main()
{
  char tree[27] = {'\0'};
  int n;
  scanf("%d", &n);
  getchar();

  int x = 0;
  char a, b, c;
  for (int i = 0; i < n; i++)
  {
    scanf("%c %c %c", &a, &b, &c);
    getchar();
    for (int j = 1; j <= 26; j++)
    {
      if (tree[j] == a)
      {
        x = j;
        break;
      }
    }
    if (x)
    {
      if (b != '.')
        tree[x * 2] = b;
      if (c != '.')
        tree[x * 2 + 1] = c;
    }
    if (x == 0)
    {
      tree[1] = a;
      tree[2] = b;
      tree[3] = c;
    }
  }

  printf("%s\n", tree);
  preorder(tree, 1);
  printf("\n");
  inorder(tree, 1);
  printf("\n");
  keytorder(tree, 1);

  return 0;
}
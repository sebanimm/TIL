#include <stdio.h>
void inputArray(int a[][4], int row);
int main()
{
  int score[3][4];
  int i, j;
  int tot;
  double avg;
  int row = 3;
  // printf("�л� 3��, ���� �� ������ ������ �Է��ϼ���\n");
  inputArray(score, row);
  //�� �л��� ������ ����� ����Ͽ� ���
  for (i = 0; i < row; i++)
  {
    tot = 0;
    for (j = 0; j < 4; j++)
    {
      tot = tot + score[i][j];
    }
    avg = tot / 4.;
    printf("���� : %d, ��� : %.2f\n", tot, avg);
  }

  return 0;
}
void inputArray(int a[][4], int row)
{ // 2���� �迭 �Ű������϶� �� ũ�� ���
  int i, j;
  //�� �л��� ������ row �� �Է¹ޱ�
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < 4; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
}

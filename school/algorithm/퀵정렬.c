#include <stdio.h>
#define swap(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
int count = 0;
int partition(int list[], int left, int right)
{
  int pivot, temp, low, high;
  low = left;
  high = right + 1;
  pivot = list[left];
  do
  {
    do
    {
      low++;
    } while (list[low] < pivot && low <= high);
    do
    {
      high--;
    } while (list[high] > pivot);

    if (low < high)
    {
      swap(list[low], list[high], temp);
    }
  } while (low < high);
  swap(list[left], list[high], temp);
  return high;
}

void quicksort(int list[], int left, int right)
{
  if (left < right)
  {
    int q = partition(list, left, right);
    quicksort(list, left, q - 1);
    quicksort(list, q + 1, right);
  }
}

int main()
{
  int list[9] = {5, 3, 8, 4, 9, 1, 6, 2, 7};
  quicksort(list, 0, 8);
  for (int i = 0; i < 9; i++)
  {
    printf("%d ", list[i]);
  }
  printf("\n%d", count);
  return 0;
}
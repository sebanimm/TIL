#include <stdio.h>

int BSearchRecursive(int arr[], int target, int low, int high)
{
  if (low > high)
    return -1;

  int mid = (low + high) / 2;
  if (arr[mid] == target)
    return mid;
  else if (arr[mid] > target)
    return BSearchRecursive(arr, target, low, mid - 1);
  else
    return BSearchRecursive(arr, target, mid + 1, high);
}

int main()
{
  return 0;
}

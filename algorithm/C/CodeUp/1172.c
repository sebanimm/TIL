#include <stdio.h>

void quickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    int temp;

    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i += 1;
        }
        while (arr[j] > pivot)
        {
            j -= 1;
        }

        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i += 1;
            j -= 1;
        }
    }

    if (left < j)
    {
        quickSort(arr, left, j);
    }
    if (i < right)
    {
        quickSort(arr, i, right);
    }
}

int main()
{
    int a[100000], b;
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, b - 1);

    for (int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
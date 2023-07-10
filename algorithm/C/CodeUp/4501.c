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
    int a[7];

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, 6);

    printf("%d\n%d", a[6], a[5]);

    return 0;
}


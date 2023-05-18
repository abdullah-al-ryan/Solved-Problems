#include <stdio.h>

int partitions(int A[], int low, int high)
{
    int pivot, i, j, temp;

    pivot = A[high];

    for(i = low - 1, j = low; j < high; j++)
    {
        if(A[j] < pivot)
        {
            i += 1;

            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    temp = A[i + 1];
    A[i + 1] = A[high];
    A[high] = temp;

    return i + 1;
}


void quickSort(int A[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int p;

    p = partitions(A, low, high);

    quickSort(A, low, p - 1);
    quickSort(A, p + 1, high);
}
int main ()
{
    int arraySize;

    printf("Array size : ");
    scanf("%d", &arraySize);

    int A[arraySize];

    printf("Enter Array Elements : \n");
    for(int i = 0; i < arraySize; i++)
    {
        scanf("%d", &A[i]);
    }

    quickSort(A, 0, arraySize - 1);

    printf("The sorted Array is: ");

    for(int i = 0; i < arraySize; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}



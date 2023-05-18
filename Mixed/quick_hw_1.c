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
    int T, arraySize;
    printf("Test Case: ");
    scanf("%d", &T);

    for(int k = 0; k < T; k++)
    {
        printf("Array size : ");
        scanf("%d", &arraySize);

        int A[arraySize];

        printf("Enter Array Elements : \n");
        for(int i = 0; i < arraySize; i++)
        {
            scanf("%d", &A[i]);
        }

        quickSort(A, 0, arraySize - 1);

        printf("Sorted Data: ");

        for(int i = 0; i < arraySize; i++)
        {
            printf("%d ", A[i]);
        }

        int indexMin = 0;
        int indexMax = arraySize - 1;

        if (arraySize % 2 == 0)
        {

            int midIndex = ((indexMin + indexMax) / 2);

            double valueMidIndex = A[midIndex];
            double valueSecondMidIndex = A[midIndex + 1];

            double median = (valueMidIndex + valueSecondMidIndex) / 2;

            printf("\nMedian is: %0.2lf\n", median);

        }
        else if (arraySize % 2 != 0)
        {

            int medIndex = ((indexMin + indexMax) / 2);

            printf("\nMedian is: %d\n", A[medIndex]);

        }

        printf("\n");
    }




    return 0;
}

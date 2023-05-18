#include<stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;

    for (i=0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}


int main()
{
    int arrSize, sum = 0, count = 0, digitSum = 0, remainder;

    printf("Enter Number of Elements in Array: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Elements of Array are: \n");

    for(int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, arrSize - 1);

    printf("\nSort list: ");
    printArray(arr, arrSize);

    int indexMin = 0;
    int indexMax = arrSize - 1;

    if (arrSize % 2 == 0) { /// even

        int midIndex = ((indexMin + indexMax) / 2);

        double valueMidIndex = arr[midIndex];
        double valueSecondMidIndex = arr[midIndex + 1];

        double median = (valueMidIndex + valueSecondMidIndex) / 2;

        printf("\nMedian is: %0.2lf\n" , median);

    } else if (arrSize % 2 != 0) { /// odd

        int medIndex = ((indexMin + indexMax) / 2);

        printf("\nMedian is: %d\n" , arr[medIndex]);

    }

    return 0;
}

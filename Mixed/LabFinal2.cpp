#include<bits/stdc++.h>
using namespace std;

//Swapping position of elements
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Array partition by pivot element
int partition(int array[], int low, int high)
{

    // Pivot selection
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void QuickSort(int array[], int low, int high)
{
    if (low < high)
    {

        int pivot = partition(array, low, high);

        // Sorting on left of pivot
        QuickSort(array, low, pivot - 1);

        // Sorting on right of pivot
        QuickSort(array, pivot + 1, high);
    }
}

// Print Function
void print(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout<<array[i]<<"\t";
    }
    cout<<endl;
}

// Main Function starts here
int main()
{
    //Last 5 digits of my ID = 13088
    int my_id[] = {1, 3, 0, 8, 8};
    int n = sizeof(my_id) / sizeof(my_id[0]);
    QuickSort(my_id, 0, n - 1);
    printf("After Sorting in Ascending Order: \n");
    print(my_id, n);
}

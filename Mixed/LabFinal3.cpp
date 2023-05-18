#include<bits/stdc++.h>
using namespace std;
//Binary Search starts here

int binarysearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] > x)
            return binarysearch(array, x, low, mid - 1);

        return binarysearch(array, x, mid + 1, high);
    }

    return -1;
}

int main(void)
{
    //Last 5 digits of my ID = 13088
    int array[] = {1, 3, 0, 8, 8};
    int n = sizeof(array) / sizeof(array[0]);
    int check;
    cout<<" Give an item to check: ";
    cin>>check;
    int result = binarysearch(array, check, -1, n);

    if (result == -1)
        cout<<"Item: "<<check<<" is not found"<<endl;
    else
        cout<<"Item: "<<check<<" is found in "<<result<<" index"<<endl;
}

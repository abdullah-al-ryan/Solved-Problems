#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j, temp;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements of Array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Bubble Sorted list in Descending : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



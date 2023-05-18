#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,i,j, temp,c=0;
    //printf("Enter Array Size : ");
    //scanf("%d",&n);
    int a[5]={1,3,0,8,8};
    //printf("Enter Elements of Array : \n");
    //for(i=0; i<n; i++)
    //{
        //scanf("%d",&a[i]);
    //}
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                c++;
            }
        }

    }
        //printf("Bubble Sorted list in Ascending : ");
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        cout<<endl<<c;
    }

#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j,min=0,result=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        swap(a[min],a[i]);
    }
    cout<<"Sorted array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    result = pow(a[1],a[n-1]);
    cout<<result<<endl;
    return 0;
}


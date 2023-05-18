#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[100000],max=0,s=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(i=0; i<n; i++)
    {
        s=s+max-arr[i];
    }
    cout<<s<<endl;
}

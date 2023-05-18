#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,c=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        int arr[x];
        for(i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        sort(arr+x,arr);
        for(i=0;i<x;i++)
        {
            if(arr[i]==arr[i+1])c=1;
            else()
        }
    }
}

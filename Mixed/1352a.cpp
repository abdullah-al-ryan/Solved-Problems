#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans=0;
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        int count=0;
        scanf("%d",&n);
        if(n%10!=0)
        {
            cout<<n%10<<" ";
            count++;
        }
        ans=n%10;
        n=n-ans;
        if(n%100!=0)
        {
            cout<<n%100<<" ";
            count++;
        }
        ans=n%100;
        n=n-ans;
        if(n%1000!=0)
        {
            cout<<n%1000<<" ";
            count++;
        }
        ans=n%1000;
        n=n-ans;
        if(n>=10000 && n%10000!=0)
        {
            cout<<n%10000<<" ";
            count++;
        }
        cout<<count;
    }

    return 0;
}



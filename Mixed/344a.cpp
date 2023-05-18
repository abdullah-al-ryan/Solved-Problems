#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a[100000],i,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])temp++;
    }
    cout<<temp<<endl;
    return 0;
}


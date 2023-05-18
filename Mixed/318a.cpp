#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,c=0,i,j,mid=0;
    cin>>n>>k;
    if(n%2==0)
    {
        mid=n/2;
        if(k<=mid)cout<<k*2-1<<endl;
        else cout<<(k-mid)*2<<endl;
    }
    else if(n%2!=0)
    {
        mid=(n/2)+1;
        if(k<=mid)cout<<k*2-1<<endl;
        else cout<<(k-mid)*2<<endl;
    }
    return 0;
}

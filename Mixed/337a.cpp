#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[60],i,x,ans=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }

    sort (a , a + m);
    x= a[m-1] - a[0];
    for(i=n;i<=m;i++)
    {
        ans= a[i-1]-a[i-n];
        ans = abs(ans);
        x = min (x, ans);
    }
    cout<<x<<endl;
    return 0;
}

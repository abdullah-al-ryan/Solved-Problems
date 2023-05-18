#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a==b)cout<<"Case "<<i<<": "<<(a*b)/2<<endl;
        else if(a>b) cout<<"Case "<<i<<": "<<ceil((a*b*1.0)/2.0)<<endl;
        else if(a<b) cout<<"Case "<<i<<": "<<ceil((a*b*1.0)/2.0)<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,i,a[105],s=0,e;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>e;
            s=s+e;
        }
        if(s==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


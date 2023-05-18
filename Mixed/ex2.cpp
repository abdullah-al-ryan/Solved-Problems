#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,i,w=0,z=0,total=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        total=total+x*y;
        if(total>m*100)
        {
            w=i;
            z=1;
            break;
        }

    }
    if(z==1) cout<<w<<endl;
    else cout<<"-1"<<endl;
    return 0;

}

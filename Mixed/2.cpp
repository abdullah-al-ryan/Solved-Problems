#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a[105],i,s=0,c=0;
    cin>>n;
    while(n--)
    {
        cin>>t;
        for(i=0;i<t;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<t;i++)
        {
            s=s+a[i];
            if(s==2048)
                {
                    c=1;
                    break;
                }
        }
        s=0;
        if(c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        c=0;
    }
    return 0;
}


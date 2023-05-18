#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,m,t,a[105],x=0,y=1,i,j;
    double s=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
            for(i=y; i<=n; i++)
            {
                for(j=x; j<n; j++)
                {
                    s=s+(a[j]/i);
                    i++;
                }
                x++;
                y++;
            }
            if(s==m) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,a[101],n,i;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            int ans=10;
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(i=1;i<n;i++)
            {
                ans = ans + min(10, a[i] - a[i-1]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

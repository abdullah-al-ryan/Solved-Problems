#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,ans=0;
    scanf("%d",&n);
    if(n>=100)
    {
        c=n/100;
        ans=ans+c;
        n=n-(c*100);

    }
    if(n>=20)
    {
        c=n/20;
        ans=ans+c;
        n=n-(c*20);

    }
        if(n>=10)
    {
        c=n/10;
        ans=ans+c;
        n=n-(c*10);

    }
        if(n>=5)
    {
        c=n/5;
        ans=ans+c;
        n=n-(c*5);

    }
        if(n>=1)
    {
        c=n/1;
        ans=ans+c;
        n=n-(c*1);

    }
    cout<<ans<<endl;
    return 0;

}

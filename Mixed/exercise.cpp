#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,b,x=0,y=0;
    double ans=0.0,ma=0.0;
    cin>>n;
    while(n--)
    {
       cin>>a>>b;
       ans = sqrt((x-a)(x-a)*1.0+(y-b)(y-b)*1.0);
       if(ans>ma)
        {
            ma=ans;

        }
        x=a;
        y=b;
    }
    cout<<ma<<endl;

}

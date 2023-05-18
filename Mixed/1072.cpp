#include<bits/stdc++.h>
using namespace std;
int main()
{
    double an,R,r;
    int n,x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>R>>n;
        an=(2*acos(0.0))/n;
        r=R*sin(an)/(1+sin(an));
        //cout<<"Case "x": "r<<endl;
        printf("Case %d: %lf\n",i,r);
    }
    return 0;


}

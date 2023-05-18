#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        double r1,r2,r3,a=0,b=0,c=0,area=0,ans=0.0,s,a1=0,b1=0,c1=0;
        cin>>r1>>r2>>r3;
        a = r1+r2;
        b = r2+r3;
        c = r3+r1;
        s=(a+b+c)/2.0;
        area=sqrt(s*1.0*(s-a)*(s-b)*(s-c));
        a1= 0.5 *r1 * r1 * acos((c*c +a*a - b*b)/(2*c*a));
        b1= 0.5 *r2 * r2 * acos((b*b + a*a - c*c)/(2*b*a));
        c1= 0.5 *r3 * r3 * acos((c*c + b*b - a*a)/(2*c*b));
        printf("Case %d: %.6f\n",i,area-(a1+b1+c1));
    }
return 0;
}

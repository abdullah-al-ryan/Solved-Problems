#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double v1,v2,v3,a1,a2,t1,t2,t3,s1,s,s2,s3;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1= v1 / a1;
        t2= v2 / a2;
        t3= max(t1,t2);
        s1= 0.5 * a1 * t1 * t1;
        s2= 0.5 * a2 * t2 * t2;
        s= s1 + s2;
        s3= t3 *v3;
        printf("Case %d: %lf %lf\n",i,s,s3);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,sum=0;
    double avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    avg=sum/(n*1.0);
    cout<<avg<<endl;

}

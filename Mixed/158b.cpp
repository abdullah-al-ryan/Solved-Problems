#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0,i,s31=0,s2=0,c1=0,c3=0,c4=0,c2=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x==3)
        {
            c3++;
        }
        else if(x==2)
        {
            c2++;
        }
        else if(x==1)
        {
            c1++;
        }
        else
            c4++;
    }
    sum= c4+c3+c2/2;
    c1=c1-c3;
    if(c2%2==1)
    {
        sum=sum+1;
        c1=c1-2;
    }
    if(c1>0)
    {
        sum = sum+ (c1+3)/4;
    }
    cout<<sum<<endl;
    return 0;
}

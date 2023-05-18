#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,sum=0,sum1=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        sum=0;
        sum1=0;
        for(int j=1;j<=3;j++)
        {
            cin>>a>>b;
            sum+=a*b;
        }
        for(int j=4;j<=6;j++)
        {
            cin>>a>>b;
            sum1+=a*b;
        }
        if(sum>sum1)cout<<"JOAO"<<endl;
        else cout<<"MARIA"<<endl;
    }
    return 0;
}

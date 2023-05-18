#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,sum=0,max=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>a>>b;
        if(i==0)
        {
            sum+=a+b;
            if(max<sum)max=sum;
        }

        else
        {
            sum=sum-a+b;
            if(max<sum)max=sum;
        }

    }
    cout<<max<<endl;
    return 0;
}

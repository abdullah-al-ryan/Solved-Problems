#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if((a+b)>c && (b+c)>a && (a+c)>b)
    cout<<"S"<<endl;

    else if ((b+c)>d && (c+d)>b && (b+d)>c)
    cout<<"S"<<endl;

    else if((a+c)>d && (c+d)>a && (a+d)>c)
    cout<<"S"<<endl;

    else if((a+b)>d && (b+d)>a && (d+a)>b)
    cout<<"S"<<endl;

    else
    cout<<"N"<<endl;
    return 0;
}

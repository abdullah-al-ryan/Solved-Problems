#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b && (a-b)%2==0) cout<<"1"<<endl;
        else if(a>b && (a-b)%2!=0) cout<<"2"<<endl;
        else if(b>a && (b-a)%2==0) cout<<"2"<<endl;
        else if(b>a && (b-a)%2!=0) cout<<"1"<<endl;
        else if(a==b) cout<<"0"<<endl;
    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,x,a,b;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        a=x/2020;
        b=x%2020;
        if(a>=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

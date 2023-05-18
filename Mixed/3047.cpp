#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,m;
    cin>>m>>a>>b;
    c=m-a-b;
    if(a>b && a>c)cout<<a<<endl;
    else if(b>c && b>a) cout<<b<<endl;
    else cout<<c<<endl;
    return 0;
}

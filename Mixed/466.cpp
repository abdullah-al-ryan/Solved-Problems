#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,m,a,b;
    double p1,p2,x,y;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
        cout<<n*a<<endl;
    else
    {
        cout<<(n/m)*b + min((n%m)*a,b)<<endl;
    }
    return 0;
}


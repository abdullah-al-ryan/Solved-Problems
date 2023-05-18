#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,m,a,b;
    double p1,p2;
    cin>>n>>m>>a>>b;
    p1=n*a;
    p2=ceil((b*n*1.0)/m*1.0);
    cout<<min(p1,p2);
}

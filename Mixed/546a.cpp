#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0,cost;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum+=i;
    }
    cost=k*sum;
    if(n>cost) cout<<"0"<<endl;
    else cout<<cost-n<<endl;
    return 0;
}

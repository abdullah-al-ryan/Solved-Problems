#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int t,x,n,m,sum=0,i;
 cin>>t;
 while(t--)
 {
     sum=0;
     cin>>n>>m;
     for(i=0;i<n;i++)
     {
         cin>>x;
         sum= sum+x;
     }
     cout<<min(sum,m)<<endl;
 }
 return 0;
}

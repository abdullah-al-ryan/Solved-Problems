#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int t,x,n,m,i;
 cin>>t;
 while(t--)
 {
     cin>>x;
     if(x==1) cout<<"-1";
     else if(x>1)
     {
         cout<<"2";
         for(i=0;i<x-1;i++)
         {
             cout<<"3";
         }
     }
     cout<<endl;
 }
 return 0;
}

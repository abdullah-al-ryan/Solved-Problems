#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i,sum=0;
   scanf("%lld",&n);
   if(n%2==0)cout<<n/2<<endl;
   else
   {
       sum=-((n/2)+1);
       cout<<sum<<endl;
   }

   return 0;
}

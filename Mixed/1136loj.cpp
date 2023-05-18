#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int i,a,b,n,t,c=0,ans=0,ans1=0,ans2=0,temp=0;
 scanf("%lld",&t);

 for(i=1;i<=t;i++)
 {
     ans1=0;
     ans=0;
     scanf("%lld%lld",&a,&b);
     c++;
     if(a>b)
     {
         swap(a,b);
     }
      if(a%3==0)ans=(a/3)*2;
      else ans=((a/3)*2)+1;
      b++;
     if(b%3==0)ans1=(b/3)*2;
     else ans1=((b/3)*2)+1;
     ans2=ans1-ans;
     printf("Case %lld: %lld\n",c,ans2);
 }
 return 0;
}



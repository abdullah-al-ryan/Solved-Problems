#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
   for(i=1;i<n;i++)
   {
       if(i%2==0)cout<<"I love that ";
       if(i%2!=0)cout<<"I hate that ";
   }
   if(n%2==0)cout<<"I love it"<<endl;
   if(n%2!=0)cout<<"I hate it"<<endl;
   return 0;
    return 0;
}



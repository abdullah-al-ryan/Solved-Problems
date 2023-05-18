#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    while(n--)
    {
      scanf("%d%d",&a,&b);
      if(a<=2)cout<<"1"<<endl;
      else
      {
         cout<<(a-3+b)/b+1<<endl;
      }
    }
    return 0;

}


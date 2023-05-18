#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    while(n--)
    {
        int c=0;
      scanf("%d%d",&a,&b);
      if(a==1 || a==2)cout<"1"<<endl;
      else if(a>2)
      {
             c=(a/b)+1;
             //s=s+c;
             cout<<c<<endl;

      }
    }
    return 0;

}

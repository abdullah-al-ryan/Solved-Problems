#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,ans=0;
  scanf("%d%d",&a,&b);
  c=min(a,b);
  ans=((a+b)-(c+c))/2;
  cout<<c<<" "<<ans<<endl;
  return 0;
}

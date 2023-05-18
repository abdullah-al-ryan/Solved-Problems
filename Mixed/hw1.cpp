#include<bits/stdc++.h>
using namespace std;
int main()
{
  int stk[5];
int i;
for(i=0;i<5;i++)
{
    scanf("%d",&stk[i]);
}
for(i=4;i>=0;i--)
{
    cout<<stk[i]<<endl;
}
return 0;
}


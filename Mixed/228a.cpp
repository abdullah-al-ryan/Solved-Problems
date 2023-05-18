#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],c=0,i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        sort(a,a+4);
        if(a[i]!=a[i+1])continue;
        else c++;
    }
    cout<<c<<endl;
    return 0;

}

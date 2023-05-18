#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,dif=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        if(q-p>1)dif++;
    }
    cout<<dif<<endl;
    return 0;
}

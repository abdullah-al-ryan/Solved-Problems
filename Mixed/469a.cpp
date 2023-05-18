#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,arr[1000],p,q,c=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=0; i<p; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&q);
    for(i=p; i<p+q; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+(p+q));
    for(i=0;i<p+q;i++)
    {
        if(arr[i]!=arr[i+1]) c++;
    }
    if(c==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;

}

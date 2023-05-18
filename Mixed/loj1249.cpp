#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[103],n,m,h,l,w,i,j,temp1=0,temp2=0;

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        int mx=0,mn=100000;
        char c[m][100];
        for(j=0; j<m; j++)
        {
            scanf("%s",c[j]);
            cin>>l>>w>>h;
            a[j]=l*w*h;
            if(a[j]>mx)
            {
                mx=a[j];
                temp1= j;
            }
            if(a[j]<mn)
            {
                mn=a[j];
                temp2=j;
            }

        }
        if(mn == mx)
            printf("Case %d: no thief\n", i);
        else
            printf("Case %d: %s took chocolate from %s\n",i,c[temp1],c[temp2]);
    }
    return 0;
}

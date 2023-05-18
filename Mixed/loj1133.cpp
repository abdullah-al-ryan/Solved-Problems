#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a[101],i,j,add,add1,add2,d,b,temp=0,z;
    char c[2];
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(j=0; j<m; m++)
        {
           scanf("%s",c);
            if(c[0]=='S')
            {
                cin>>add;
                for(i=0; i<n; i++)
                {
                    a[i]=a[i]+add;
                }
            }
            else if(c[0]=='M')
            {
                cin>>add1;
                for(i=0; i<n; i++)
                {
                    a[i]=a[i]*add1;
                }
            }
            else if(c[0]=='D')
            {
                cin>>add2;
                for(i=0; i<n; i++)
                {
                    a[i]=a[i]/add2;
                }
            }
            else if(c[0]=='P')
            {
                cin>>b>>d;
                for(i=0; i<n; i++)
                {
                    temp= a[b];
                    a[b]=a[d];
                    a[d]= temp;
                }
            }
            else if(c[0]=='R')
            {
                for(i=0; i<=(n-1)/2; i++)
                {
                    temp= a[i];
                    a[i]=a[n-i-1];
                    a[n-i-1]= temp;
                }
            }
        }
        printf("Case %d:\n",z);
        for(i=0; i<n-1; i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n", a[n-1]);
    }
    return 0;
}

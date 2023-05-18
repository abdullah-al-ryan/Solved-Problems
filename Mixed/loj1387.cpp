#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,total,i,j;
    char c[10];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        printf("Case %d:\n",i);
        total=0;
        x=0;
        for(j=1;j<=m;j++)
        {
            scanf("%s",c);
            if(strcmp(c,"donate")==0)
                {
                    cin>>x;
                    total+=x;
                }
            else cout<<total<<endl;
        }
    }
    return 0;
}

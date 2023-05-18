#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k;
    cin>>t;
    while(t--)
    {
        int n,a[10];
        for(i=0; i<10; i++)
        {
            a[i]=0;
        }
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            j=i;
            while(j!=0)
            {
                k=j%10;
                a[k]++;
                j/=10;
            }
        }
        for(i=0; i<9; i++) printf("%d ", a[i]);
        cout<<a[9]<<endl;
    }
    return 0;
}


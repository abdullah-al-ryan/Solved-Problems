#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}

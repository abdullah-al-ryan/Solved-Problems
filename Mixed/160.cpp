#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,sum1=0,j,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    sort(a,a+n);
    for(j=n-1;j>=0;j--)
    {
        sum1=sum1+a[j];
        if(sum1>(sum-sum1))
        {
            c++;
            break;
        }
        c++;
    }
    cout<<c<<endl;
}

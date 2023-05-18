#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,x,n,i,j;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int arr[n],temp=0;

        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        for(i=0; i<n-1; i++)
            {
                if(arr[i+1]-arr[i]>1)
                    temp=1;

            }
            if(temp>0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }

    return 0;
}


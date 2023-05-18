#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,fone,lone,z=0,x;
    cin>>x;
    while(x--)
    {
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            if(arr[i]==1)
            {
                fone=i;
                break;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            if(arr[i]==1)
            {
                lone=i;
                break;
            }
        }
        for(i=fone; i<=lone; i++)
        {
            if(arr[i]==0)
            {
                z++;
            }
        }
        cout<<z<<endl;
        z=0;
    }
    return 0;
}

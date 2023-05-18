#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,e=0,o=0,b,c;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            e++;
            b=i;
        }
        else
        {
            o++;
            c=i;
        }
    }
    if(e==1)
        cout<<b+1<<endl;
    else if (o==1)
        cout<<c+1<<endl;
    return 0;
}

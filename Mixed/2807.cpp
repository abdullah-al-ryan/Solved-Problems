#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,arr[50];
    cin>>x;
    for(int i=x-1;i>0;i--)
    {
        arr[i]=1;
        arr[i-1]=1;
        arr[i-2]=arr[i]+arr[i-1];
    }
    cout<<arr[i-2]<<endl;
    return 0;
}

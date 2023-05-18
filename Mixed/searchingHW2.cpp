#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[6],k,i,x=-1;
    cout<<"Ar[] = ";
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    cout<<"Search = ";
    cin>>k;
    for(i=0;i<8;i++)
    {
        if(k==a[i])
        {
            x=i;
        }
    }
    if(x>-1) cout<<"Position = "<<x<<" Row"<<endl;
    else cout<<"Product not available"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[8],i,k,x=0;
    cout<<"Ar[] = ";
    for(i=0; i<8; i++)
    {
        cin>>a[i];
    }
    cout<<"Key = ";
    cin>>k;
    for(i=0; i<8; i++)
    {
        if(a[i]==k)
        {
            x++;
        }
    }
    if(x>0) cout<<"Last Occurrence = "<<x<<endl;
    else cout<<"Item Not Found"<<endl;

    return 0;
}


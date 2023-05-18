#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,x,c;
    cin>>x;
    if(x%5==0)
    {
        c=x/5;
        cout<<c<<endl;
    }
    else
        cout<<(x/5)+1<<endl;
    return 0;
}

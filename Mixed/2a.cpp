#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n,i,t=0;
    cin>>n>>str;
    for(i=0;i<n;i++)
    {
        if((str[i]-'0')%2==0)
            t=t+i+1;
    }
    cout<<t<<endl;
    return 0;

}

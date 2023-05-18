#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int a,temp=0;
    cin>>n;
    while(n)
    {

        if(n%10==4 || n%10==7) temp++;
        n=n/10;
    }
    if(temp==7 || temp==4)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a,b,c,x;
    cin>>a>>b>>c;
    x=a+b;
    sort(x.begin(),x.end());
    sort(c.begin(),c.end());
    if(x.compare(c)==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;

}

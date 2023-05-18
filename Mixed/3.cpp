#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && a==c) cout<<"Equilateral Triangle"<<endl;
    else if(a!=b && b!=c && a!=c) cout<<"Bad Triangle"<<endl;
    else cout<<"Isosceles Triangle"<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char s[101],b[101],s1[101];
    cin>>s>>s1;
    strrev(s);
    if(strcmp(s,s1)==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


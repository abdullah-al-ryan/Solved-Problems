#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[3];
    int c=0;
    scanf("%s",s);
    if(s[0]=='R' && s[1]=='R' && s[2]=='R')c=3;
    else if(s[0]=='R' && s[1]=='R' && s[2]=='S')c=2;
    else if(s[0]=='R' && s[1]=='S' && s[2]=='R')c=1;
    else if(s[0]=='R' && s[1]=='S' && s[2]=='S')c=1;
    else if(s[0]=='S' && s[1]=='R' && s[2]=='R')c=2;
    else if(s[0]=='S' && s[1]=='R' && s[2]=='S')c=1;
    else if(s[0]=='S' && s[1]=='S' && s[2]=='R')c=1;
    else if(s[0]=='S' && s[1]=='S' && s[2]=='S')c=0;
    cout<<c<<endl;

}

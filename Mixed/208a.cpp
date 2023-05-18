#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[205];
    int i;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            cout<<" ";
        }
        else cout<<s[i];
    }
    return 0;
}

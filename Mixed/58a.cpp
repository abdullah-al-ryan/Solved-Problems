#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[105];
    int i,c=0;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(c==0 && s[i]=='h')c++;
        else if (c==1 && s[i]=='e')c++;
        else if (c==2 && s[i]=='l')c++;
        else if (c==3 && s[i]=='l')c++;
        else if (c==4 && s[i]=='o')c++;
    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


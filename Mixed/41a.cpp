#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char s[101],b[101],s1[101];
    int i,j;
    cin>>s>>s1;
    for( j=0,i=strlen(s)-1;j>=strlen(s)-1,i>=0;i--,j++)
    {
        b[j]=s[i];
    }
    b[j]='\0';
    if(strcmp(b,s1)==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

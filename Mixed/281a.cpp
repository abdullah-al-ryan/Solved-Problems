#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char str[100];
    char x;
    cin>>str;
    x=toupper(str[0]);
    cout<<x;
    for(int i=1;i<strlen(str);i++)
    {

        cout<<str[i]<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int x,i,y,z=0;

    cin>>x;
    char s[x];
    scanf("%*c%s",s);
    y = strlen(s);
    z= x-y;
    for(i=0;i<z;i++)
    {
        cout<<"*";
    }
    for(i=z,y=0;i<=x;i++)
    {
        cout<<s[y];
        y++;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[200000];
    int c=0,i;
    while(gets(s))
    {

        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='"')
            {
                c++;
                if(c%2!=0) cout<<"``";
                else printf("''");
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

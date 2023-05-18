#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    int n,i;

    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            string s;
            cin>>s;
            int n=1;
            for(i=0; i<s.length(); i++)
            {
                if(s[i]=='D')
                {
                    n++;
                    if(n>4)
                        n=1;
                }
                else if(s[i]=='E')
                {
                    n--;
                    if(n==0)
                        n=4;
                }
            }
            if(n==1)
                cout<<"N\n";
            if(n==2)
                cout<<"L\n";
            if(n==3)
                cout<<"S\n";
            if(n==4)
                cout<<"O\n";
        }
    }

    return 0;
}

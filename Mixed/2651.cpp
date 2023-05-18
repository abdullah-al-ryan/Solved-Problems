#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char str[10001];
    cin>>str;
    int x,i,temp=0;
    x=strlen(str);
    for(i=0; i<x; i++)
    {
        if(str[i+0]=='Z' || str[i+0]=='z')
        {
            if(str[i+1]=='E' || str[i+1]=='e')
            {
                if(str[i+2]=='L' || str[i+2]=='l')
                {
                    if(str[i+3]=='D' || str[i+3]=='d')
                    {
                        if(str[i+4]=='A' || str[i+4]=='a')
                            temp=1;
                            break;
                    }
                }
            }
        }
    }
    if(temp==1)
        cout<<"Link Bolado"<<endl;
        else
            cout<<"Link Tranquilo"<<endl;
        return 0;
    }

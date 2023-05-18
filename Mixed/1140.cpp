#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    while(1)
    {
        int i,n=0;
        char c[1001],x;
        gets(c);
        if(c[0]=='*')
            break;

        for(i=0; i<strlen(c); i++)
        {
            if (c[i] >= 'A' && c[i] <= 'Z')
                c[i] = c[i] + 32 ;
        }

        x=c[0];

        for(i=0; i<strlen(c); i++)
        {
            if(c[i]==' ')
            {
                if(c[i+1]==x || c[i+1]==c[0])
                {
                    continue;
                }
                else
                {
                    n=1;
                    break;
                }
            }
        }
        if(n==0)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;

}

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,t,i;
    string s;
    scanf("%d%d",&n,&t);
    cin>>s;
    for(int j=0;j<t;j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }

        }
    }
    cout<<s<<endl;
    return 0;
}

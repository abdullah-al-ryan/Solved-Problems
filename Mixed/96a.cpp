#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long int i,o=0,z=0,s=0;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {

         if(str[i]=='1')
         {
             o++;
             z=0;
         }
         else
         {
             z++;
             o=0;

         }
         if(o==7 || z==7)s=1;

    }
    if(s==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


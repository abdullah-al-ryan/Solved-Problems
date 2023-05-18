#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,low=0;
    string s;
    cin>>s;
    for(i=1; i<s.size(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
            low++;
    }
    if(low == s.size()-1)
    {
        for(i=0 ; i<s.size(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]=s[i]+32;
            else if(s[i]>=97 && s[i]<=122)
                s[i] = s[i]-32;
        }
    }
    cout<<s<<endl;
    return 0;

}

#include<bits/stdc++.h>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    int c=0,C=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')C++;
        else if (s[i]>='a' && s[i]<='z')c++;
    }
    if(c>=C)
    {
        for(int i=0; i<s.size(); i++)
        {
            s[i]= tolower(s[i]);
        }
        cout<<s<<endl;
    }

    else {
         for(int i=0; i<s.size(); i++)
        {
            s[i]= toupper(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}

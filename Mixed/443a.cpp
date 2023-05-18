#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    for(i=0;i<s.size()-1;i++)
    {
        if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' ')
            continue;
        else if(s[i]!=s[i+1]) c++;
    }
    cout<<c<<endl;
    return 0;
}

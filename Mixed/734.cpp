#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,a=0,d=0;
    string s;
    scanf("%d",&n);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')a++;
        else if(s[i]=='D')d++;
    }
    if(a==d)cout<<"Friendship"<<endl;
    else if(a>d)cout<<"Anton"<<endl;
    else if(a<d)cout<<"Danik"<<endl;
    return 0;
}

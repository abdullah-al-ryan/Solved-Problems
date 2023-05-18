#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i,flag;
    for(i=0;i<s.size();i++)
    {
        if(s[i] =='H' || s[i] =='Q' || s[i] =='9')
            {
                flag=0;
                break;
            }
        else flag=1;
    }
    if(flag==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

/******************************************************************************
                             بسم الله الرحمن الرحيم
                         In the name of ALLAH
                     Author: Abdullah Al Ryan
                             DIU-CSE53
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,str[600];
    vector<char>pali;
    int arr[500],i,j,k,n,x;
    while(1)
    {
        cin>>str;
        memset(arr,0,sizeof arr);
        if(strcmp(str,"#")==0) break;
        x = strlen(str);
        for(i=0;i<x;i++)
        {
            arr[str[i]]++;
        }
        for(i=0;i<=128;i++)
        {
            if(arr[i]%2!=0)
            {
                ch=i;
                pali.push_back(ch);
            }
        }
        sort(pali.begin(),pali.end());
        for(i=0;i<pali.size();i++)
        {
            if(i!=pali.size()-1)
            {
                cout<<pali[i];
            }
        }
        cout<<endl;
        pali.clear();
    }
    return 0;
}

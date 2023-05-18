#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    int n,cnt=0,x;
    char str[100];
    cin>>n;
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        if(str[i]==str[i+1])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}




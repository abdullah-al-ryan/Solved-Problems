#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a[14]={4,7,47,74,44,77,444,447,474,477,777,774,744,747};
    int n,i,c=0;
    cin>>n;
    for(i=0;i<14;i++)
    {
        if(n%a[i]==0)
        {
            c=1;
            break;
        }
        else
        {
            c=0;
        }
    }
    if(c==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

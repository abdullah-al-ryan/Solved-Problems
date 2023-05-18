#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a%b==0)cout<<"0"<<endl;
        else if(a%b!=0)
        {
            c=b-(a%b);
            cout<<c<<endl;
        }
    }
    return 0;
}

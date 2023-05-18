#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    long long int n,x,i,j,c=0,res=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        c=0;
        res = sqrt(x);
        for(j=3; j<=res+1; j+=2)
        {
            if(x%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

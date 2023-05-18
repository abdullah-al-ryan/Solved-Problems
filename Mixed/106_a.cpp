#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int sa=0,sb=0,total,n,i,j,g=0;
    cin>>n;
    for(i=1;i<26;i++)
    {
        total = 0;
        sa=0;
        sb=0;
        for(j=1;j<38;j++)
        {
            sb=pow(5,i);
            sa=pow(3,j);
            total = sa + sb;
            if(n==total)
            {
                cout<<j<<" "<<i<<endl;
                g=1;
                break;
            }
        }
    }
    if(g!=1) cout<<"-1"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<k;i++)
    {
        a=n%10;
        if(a!=0)
        {
            n--;
            continue;
        }
        else if(a==0) n=n/10;
    }
    cout<<n<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    unsigned long long int x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%llu",&x);
        if(x%2==0)
            cout<<(x/2)-1<<endl;
        else cout<<x/2<<endl;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,digit,rev=0,a=1;
    cin>>n;
    while(n--)
    {
        cin>>x;
        y=x;
        while(x!=0)
        {
            digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        if(y==rev)
            printf("Case %d: Yes\n",a);
        else
            printf("Case %d: No\n",a);
        a++;
        digit=0;
        rev=0;
    }
    return 0;
}

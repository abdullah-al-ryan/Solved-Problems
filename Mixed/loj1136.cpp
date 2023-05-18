#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,n=0,c=0,a,b,x=0;
    scanf("%d%d",&a,&b);
    for(i=1; i<=10000; i++)
    {
        n=n*10+i;
        x++;
        if(x>=a && x<=b)
        {
            if(n%3==0)c++;
        }


    }printf("%d\n",c);
    return 0;
}

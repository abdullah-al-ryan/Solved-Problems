#include<stdio.h>
int main()
{
    long long int x,y,i,fact=1,fact1=1,sum=0;
    while(scanf("%lld%lld",&x,&y)!=EOF)
    {
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=y;i++)
    {
        fact1=fact1*i;
    }
    sum=fact+fact1;
    printf("%lld\n",sum);
    fact=fact1=1;
    }

    return 0;
}


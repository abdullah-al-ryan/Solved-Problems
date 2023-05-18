#include<stdio.h>
int leap(int year)
{
    int temp=0;
    if (year%400 == 0)
        temp=1;
    else if(year %100 == 0)
        temp=0;
    else if(year %4 == 0)
        temp=1;
    else
        temp=0;
    return temp;
}
int main()
{
    int year,x;
    scanf("%d",&year);
    x= leap(year);
    if(x==0)

        printf("%d year is not leap year\n",year);

    else
        printf("%d year is  leap year\n",year);
    return 0;
}

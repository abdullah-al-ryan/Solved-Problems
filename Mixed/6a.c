#include<stdio.h>
leap(int year)
{
    if(year%400 == 0)
        return true;
    else if(year %100 == 0)
        return false;
    else if(year %4 == 0)
        return true;
    else
        return false;
}
int main()
{
    int year;
    scanf("%d",&year);
    if{leap(year)
}
        printf("%d year is leap year\n",year);
    else
        printf("%d year is not a leap year\n",year);
    return 0;
}

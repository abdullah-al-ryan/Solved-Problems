#include<stdio.h>
int integer(int a,int b)
{
    int sum=a+b;
    float avg=sum*1.0/2;
    printf("Sum= %d\n",sum);
    printf("Average= %.5f\n",avg);
}
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=integer(a,b);
    return 0;
}

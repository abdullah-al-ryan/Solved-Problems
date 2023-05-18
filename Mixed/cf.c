#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    while(n--)
    {
        int s=0;
        scanf("%d%d",&a,&b);
        s=round(a*1.0/b*1.0)+1;
        printf("%d\n",s);
    }

    return 0;

}


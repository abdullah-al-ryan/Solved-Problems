#include<stdio.h>
int main()
{
    int a=0,i,m=0,g=0,ii=0,c=0,r=0,n;
    char s[1000];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<'\0';i++)
    {

        if(s[i]=='M')m++;
        if(s[i]=='A')a++;
        if(s[i]=='G')g++;
        if(s[i]=='C')c++;
        if(s[i]=='R')r++;
        if(s[i]=='I')ii++;
    }
    if(m>=1 && a>=2 && g>=1 && c>=2 && ii>=1 && r>=1)
        printf("Wait! Magic car is coming\n");
    else printf("Run! RUn! Run!\n");
    return 0;
}

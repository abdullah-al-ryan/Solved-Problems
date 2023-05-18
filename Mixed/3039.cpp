#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    char str[100],p;
    int f=0,m=0,x,y;
    cin>>y;
    for(int i=0; i<y; i++)
    {
        scanf("%s%*c%c",str,&p);
        x=strlen(str);
        if(p=='F')
            f++;
        else if(p=='M')
            m++;
    }
    cout<<m<<" "<<"carrinhos"<<endl;
    cout<<f<<" "<<"bonecas"<<endl;
    return 0;

}

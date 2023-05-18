#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,c=0,d=0,i,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&i,&j);
        if(i>j)m++;
        else if(i<j)c++;
        else continue;

    }
    if(m>c)cout<<"Mishka"<<endl;
    else if (m<c)cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;


    return 0;
}


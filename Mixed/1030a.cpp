#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,temp=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        if(a==1)temp++;
    }
    if(temp==0)cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[200];
        cin>>a;
        int x= strlen(a);
        cout<<a[0];
        for(int i=1;i<x;i+=2)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}

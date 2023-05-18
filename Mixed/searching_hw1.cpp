#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[8],k,left=0,right=8-1,mid,i,j;
    mid=(left+right)/2;
    cout<<"Ar[] ={";
    for(i=0; i<8; i++)
    {
        scanf("%d",&a[i]);
    }
    cout<<"}"<<endl;
    cout<<"Key = ";
    cin>>k;
    while(left<=right)
    {
        if(k<a[mid])
            right=mid-1;
        else if(k>a[mid])
            left=mid+1;
        else if(k==a[mid])
        {

        }


    mid=(left+right)/2;
}
    if(left>right)
    {
        printf("Item Not Found");
    }
    return 0;
}

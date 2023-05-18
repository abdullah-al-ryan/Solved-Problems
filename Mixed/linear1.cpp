#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,n,key,a[100];
    printf("Enter Array length: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    cout<<"Enter Search key : ";
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            cout<<"Found at : "<<i<<" Location"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Not Found!"<<endl;
    }

return 0;
}



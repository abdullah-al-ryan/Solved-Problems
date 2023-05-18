#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int n,x;
    cin>>n;
    int a[n],c=1,m=1,i;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<n; i++)
    {
        if(a[i]>=a[i-1])
            c++;
        else
        {
           m = max(c,m);
           c=1;
        }
    }
    m = max(c,m);
    cout<<m<<endl;
return 0;
}


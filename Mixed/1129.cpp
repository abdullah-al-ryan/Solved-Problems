#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i;
    while(cin>>n && n!=0)
    {
        while(n--)
        {
            int p=0,c=0;
            for(i=1; i<=5; i++)
            {
                cin>>a;
                if(a<128)
                {
                    p=i;
                    c++;
                }
            }
            if (c>1 || c==0)
                cout<<"*"<<endl;
            else
            {
                if(p==1)
                    cout<<"A"<<endl;
                else if(p==2)
                    cout<<"B"<<endl;
                else if(p==3)
                    cout<<"C"<<endl;
                else if(p==4)
                    cout<<"D"<<endl;
                else if(p==5)
                    cout<<"E"<<endl;
            }
        }
    }
return 0;
}

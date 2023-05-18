#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    while(1)
    {
       int h2=0,h1=0;
       cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
       if(x1==0 && x2==0 && x3==0 && x4==0 && y1==0 && y2==0 && y3==0 && y4==0) break;
       else
       {
           h1= abs(y1-y3);
           h2= abs(y2-y4);
           if(h1==h2) cout<<"("<<(h1/2)*(h1/2)<<"/1)*pi"<<endl;
           else cout<<"-1"<<endl;

       }
    }
    return 0;


}

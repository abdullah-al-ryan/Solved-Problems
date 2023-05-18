#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    while(1)
    {
        double a=0,b=0,c=0;
       cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
       if(x1==0 && x2==0 && x3==0 && x4==0  && y1==0 && y2==0 && y3==0 && y4==0) break;
       else
       {
           a = sqrt((x2-x4)*1.0*(x2-x4)*1.0 + (y2-y4)*1.0*(y2-y4)*1.0);
           b= sqrt((x1-x3)*1.0 *(x1-x3)+ (y1-y3)*1.0*(y1-y3));
           c= min(a,b);
           cout<<c;
       }
    }
    return 0;


}

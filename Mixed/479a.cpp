#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s1,s2,s3,s4,p,q,r,s5;
    cin>>a>>b>>c;
    s1 = a+ b*c;
    s2 = a*(b+c);
    s3 = a*b*c;
    s4 = (a+b)*c;
    s5 = a+b+c;
    p = max(s1,s2);
    q= max(p,s3);
    r = max(q,s4);
    s5 = max(r,s5);
    cout<<s5<<endl;

}

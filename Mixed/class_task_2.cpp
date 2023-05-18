//using c++ language
//id: 192-15-13088
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    int i,temp=0;
    for(i=0;i<x.length();i++)
    {
        if(x[i]==' ' or x[0]=='0' or x[0]=='1' or x[0]=='2' or x[0]=='3'
           or x[0]=='4' or x[0]=='5' or x[0]=='6' or x[0]=='7' or x[0]=='8' or x[0]=='9')
        {
            cout<<"invalid";
            temp=1;
            break;
        }
    }
    if(temp==0)
        cout<<"valid";
    return 0;

}

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string x;
   cin>>x;

    for(int i=0; i<x.size(); i+=2)
    {
        for(int j=0; j<x.size()-1; j+=2)
        {
            if(x[j]>x[j+2])
            {
                swap(x[j],x[j+2]);
            }

        }
    }
    cout<<x<<endl;
}

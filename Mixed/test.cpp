#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> vec;
    vector <int>::iterator it;
    for(int i=1;i<=5;i++)
    {
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<"\t";
    }
    puts("");
    for(it= vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<"\t";
    }

   return 0;
}

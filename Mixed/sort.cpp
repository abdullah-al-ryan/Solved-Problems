#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={5,2,3,6,1};
    sort(ar+2, ar+5);
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\n");

   return 0;
}


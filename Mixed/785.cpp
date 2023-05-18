#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    char s[20];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        if(strcmp(s,"Cube")==0)c=c+6;
        else if (strcmp(s,"Tetrahedron")==0)c=c+4;
        else if (strcmp(s,"Octahedron")==0)c=c+8;
        else if (strcmp(s,"Dodecahedron")==0)c=c+12;
        else if (strcmp(s,"Icosahedron")==0)c=c+20;

    }
    cout<<c<<endl;
}

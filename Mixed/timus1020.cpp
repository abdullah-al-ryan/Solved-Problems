#include<bits/stdc++.h>
using namespace std;

float pi = 3.1415926;

float d(float x1, float y1, float x2, float y2)
{
    float dx= x1- x2;
    float dy= y1-y2;
    return sqrt((dx*dx)+(dy*dy));
}

int main ()
{
    int n,i;
    float r;
    cin>>n>>r;
    float len=0,p[n][2];
    for (i=0; i<n; i++)
    {
        scanf("%f %f", &p[i][0], &p[i][1]);
        if(i>0) len += d(p[i][0], p[i][1], p[i-1][0], p[i-1][1]);
    }
    len += d(p[0][0], p[0][1], p[n-1][0], p[n-1][1]);
    len += 2.0*pi*r;
    printf("%.2f\n", len);
    return 0;
}

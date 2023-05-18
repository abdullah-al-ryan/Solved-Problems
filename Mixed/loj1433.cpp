#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int Ox, Oy, Ax, Ay, Bx, By, n, i;
    double O,A,B,angle,s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        O = sqrt( (Bx-Ax) * (Bx-Ax) *1.0 + (By-Ay)*(By-Ay) );
        A = sqrt( (Ox-Bx) * (Ox-Bx) *1.0 + (Oy-By)*(Oy-By) );
        B = sqrt( (Ox-Ax) * (Ox-Ax) *1.0 + (Oy-Ay)*(Oy-Ay) );
        angle = acos(((A*A)+(B*B)-(O*O)) / (2.0*A*B));
        s = A * angle * 1.0;
        printf("Case %d: %lf\n",i,s);
    }
    return 0;
}

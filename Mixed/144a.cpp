    #include<bits/stdc++.h>

    using namespace std;
    int main()
    {
        int n,k,i,minn=0;
        scanf("%d%d",&n,&k);
        for(i=1;i<=n;i++){
            minn+=i*5;
            if(minn>240-k){
                printf("%d\n",i-1);
                return 0;
            }
        }
        printf("%d\n",i-1);
        return 0;
    }

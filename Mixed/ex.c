#include<stdio.h>
int main() {
int n,i,fact=1;
scanf("%d",&n);
if(n>0 && n<13){
for(i=0;i<n;i++){

    fact=fact*(n-i);
}
printf("%d\n",fact);
}
return 0;
}


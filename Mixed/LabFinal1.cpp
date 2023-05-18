#include<bits/stdc++.h>
using namespace std;
int main()
{

    //Last five digit of my ID is 13088
    int iddigit = 13088, sum = 0;
    int id = iddigit;
    while(iddigit!=0)
    {
        sum+=iddigit%10;
        iddigit/=10;
    }
    printf("Summation of ID: %d = %d\n", id, sum);

    //Checking if the Sum is EVEN or ODD
    if(sum%2==0)
        cout<<"Summation of ID: "<<id<<" is EVEN"<<endl;
    else
        cout<<"Summation of ID: "<<id<<" is ODD"<<endl;

    //Checking if the Sum is Prime or Composite
    int flag=0, i=2;
    for(i=2; i<sum/2; i++)
    {
        if(sum%i==0) flag=1;
    }
    //Checking if the Sum is PRIME or NOT PRIME
    if(flag==0)
        cout<<"Summation of ID: "<<id<<" is Prime"<<endl;
    else
        cout<<"Summation of ID: "<<id<<" is Not Prime"<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    while(1)
    {
        int randnum,guess;
        cin>>guess;
        randnum= rand()%5+1;
        if(randnum==guess)
            cout<<"You have won"<<endl;
        else {
            cout<<"You have lost! Try again"<<endl;
            cout<<"Random number was: "<<randnum<<endl;
        }
    }
        return 0;
}

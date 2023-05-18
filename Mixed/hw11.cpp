#include<bits/stdc++.h>
using namespace std;
int stac[100]={0},s_size=0,top=0;

void push(int item)
{
    if(top==s_size)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    stac[top]=item;
}

void display()
{
    int i;
    for(i=0;i<s_size;i++)
    {
        cout<<stac[i]<<"\t";
    }
}

int main()
{
    int item;
    cin>>s_size;
    cout<<"Enter expected value to push: ";
    cin>>item;
    push(item);
    display();
}


#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;
char stac[100]={0};
int s_size=0,top=0;

void push(string name)
{
    top++;
    stac[top]=name;
}

void display()
{
    int i;
    for(i=name.size();i>=0;i--)
    {

        cout<<stac[i]<<"\t";
    }
}

int main()
{
    string name;
    cin>>s_size;
    cout<<"Enter expected value to push: ";
    cin>>name;
    push(name);
    display();
}



#include<bits/stdc++.h>
using namespace std;
int stac[100]= {0},s_size=0,top =0;
void push (int item)
{
    if(top==s_size)
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    top++;
    stac[top]=item;
}
int pop()
{
    int item;
    if(top==0)
    {
        cout<<"Stack overflow"<<endl;
        return 0;
    }
    item= stac[top];
    stac[top]=0;
    top--;
    return item;
}

void display()
{
    int i;
    cout<<"The updated stack: \n";
    for(i=s_size; i>=1; i--)
    {
        cout<<stac[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int item,i;
    cout<<"Enter stack size: "<<endl;
    cin>>s_size;

    for(i=0; i<s_size; i++)
    {
        scanf("%d", &item);
        push(item);
        display();
    }
}


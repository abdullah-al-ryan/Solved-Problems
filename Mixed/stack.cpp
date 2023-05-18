#include<bits/stdc++.h>
using namespace std;
int stac[100]={0}, s_size=0,top =0;
 // Push starts

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
 //pop starts
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
 int item,a,b;
 cout<<"Enter stack size: "<<endl;
 cin>>s_size;
 do
    {
        cout<<"1 for push & 2 for pop & 3 for display"<<endl<<"Enter your choice: ";
    cin>>a;
    if(a==1)
    {
    cin>>item;
    push(item);
    display();
    }
    else if(a==2)
    {
        item= pop();
        if(item!=0)
        {
            cout<<"The deleted value is: "<<item<<endl;
        }
        display();
    }
    else if(a==3)
    {
        display();
    }
    else
    {
        cout<<"W/A...Enter the right choice"<<endl;
    }
    cout<<"'1' for run again"<<endl<<"For exit press any key"<<endl;
    cin>>b;
    }
    while(b==1);
        return 0;
    }



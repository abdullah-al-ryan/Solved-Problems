#include<stdio.h>
int stack[100]={0}, s_size=0,top =0;
 void push (int item)
 {
     if(top==s_size)
     {
         cout<<"Stack overflow"<<endl;
         return;
     }
     top++;
     stack[top]=item;
 }

 int main()
 {
 int item a,b;
 cout<<"Enter stack size: "<<endl;
 cin>>s_size;
 cin>>item;
    push(item);
    display();

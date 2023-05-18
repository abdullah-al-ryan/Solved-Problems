#include<bits/stdc++.h>
#define MAX 10
using namespace std;


struct stac
{
    int stk[MAX];
    int top;
};
typedef struct stac STACK;
STACK s;

void push(void);
int pop(void);
void display(void);

int main()
{
    int choice;
    int option = 1;
    s.top = -1;
    cout<<"Stack  operation"<<endl;
    while(option)
    {
        cout<<"............"<<endl;
        cout<<"1 --> PUSH"<<endl;
        cout<<"2 --> POP"<<endl;
        cout<<"3 --> DISPLAY"<<endl;
        cout<<"4 --> EXIT"<<endl;
        cout<<"--------"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
        fflush(stdin);
        cout<<"Type 0 or 1 to continue"<<endl;
        cin>>option;
    }
}

void push()
{
    int num;
    if(s.top == (MAX - 1))
    {
        cout<<"Stack overflow"<<endl;
        return;
    }
    else
    {
        cout<<"Enter to push"<<endl;
        cin>>num;
        s.top=s.top+1;
        s.stk[s.top] = num;
    }
    return ;
}

int pop()
{
    int num;
    if(s.top==-1)
    {
        cout<<" Stck is empty"<<endl;
        return(s.top);
    }
    else
    {
        num = s.stk[s.top];
        cout<<"Poped element is: "<<s.stk[s.top]<<endl;
        s.top = s.top -1;
    }
    return (num);
}

void display()
{
    int i;
    if(s.top == -1)
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    else
    {
        cout<<"The status of the stack is: "<<endl;
        for(i=s.top;i>=0;i--)
        {
            cout<<s.stk[i];
        }
    }
    cout<<endl;
}

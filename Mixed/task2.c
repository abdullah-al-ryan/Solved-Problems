#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();

void main()
{
    int i, choice;
    char s[MAX], b;
    printf("Enter the String\n");
    scanf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        b = s[i];
        push(b);
    }
    for (i = 0;i < (strlen(s) / 2);i++)
    {
        if (stack[top] == stack[front])
        {
            pop();
            front++;
        }
        else
        {
            printf("The Given String is not palindrome\n");
            break;
        }
    }
    if ((strlen(s) / 2)  ==  front)
    {
        printf("The Given String is Palindrome\n");
    }
    front  =  0;
    top  =  -1;
}

void push(char a)
{
    top++;
    stack[top]  =  a;
}

void pop()
{
    top--;
}

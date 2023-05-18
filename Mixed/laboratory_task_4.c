#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int s = -1;
char stack[50];
void push(char);
void pop();
void find_s();
void main()
{
    int i;
    char sayed[50];
    printf("Enter Any Expressions: ");
    scanf("%s", &sayed);
    for (i = 0; sayed[i] != '\0'; i++)
    {
        if (sayed[i] == '(')
            push(sayed[i]);
        else if (sayed[i] == ')')
            pop();
    }
    find_s();
}
void push(char sayed)
{
    stack[s] = sayed;
    s++;
}
void pop()
{
    if (s == -1)
    {
        printf("Not Accepted\n");
        exit(0);
    }
    else
        s--;
}
void find_s()
{
    if (s == -1)
        printf("\Accepted\n");
    else
        printf("\Not Accepted\n");
}

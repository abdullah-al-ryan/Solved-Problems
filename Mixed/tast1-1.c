#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void push ()
{
    int x;
    scanf ("%d", &x);
    if (top == N - 1)
        printf ("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop ()
{
    int item;
    scanf ("%d", &item);
    if (top == -1)
        printf ("Stack Underflow\n");
    else
    {
        item = stack[top];
        top--;
    }
    printf ("Popped: %d\n", item);
}

void Top ()
{
    if (top == -1)
        printf ("Stack Underflow\n");
    else
        printf ("Top of this Stack: %d\n", stack[top]);
}

void display ()
{
    int i;
    for (i = top; i >= 0; i--)
        printf ("Stack position: %d\nValue: %d\n", i, stack[i]);
        printf("\n");
}

int main ()
{
    while (1)
    {
        printf ("1 to push\n");
        printf ("2 to pop\n");
        printf ("3 to Top\n");
        printf ("4 to display\n");
        printf ("0 to exit\n");
        int t;
        scanf ("%d", &t);
        switch (t)
        {
        case 1:
            push ();
            break;
        case 2:
            pop ();
            break;
        case 3:
            Top ();
            break;
        case 4:
            display ();
            break;
        case 0:
            return 0;
        default:
            printf ("Invalid Choice\n");
        }
    }
}

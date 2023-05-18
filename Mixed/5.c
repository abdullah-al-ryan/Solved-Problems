#include<stdio.h>
char five (char x)
{
    char d;
    if(x >= 'A' && x <= 'Z')
    {
        d = x + 32;
    }
    else if ( x >= 'a' && x <= 'z')
    {
        d = x - 32;
    }

    return d;
}
int main()
{
    char x,a;
    scanf ("%c",&x);
    a = five (x);
    printf ( "%c\n",a );
    return 0;
}



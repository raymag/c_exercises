#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Insert char: ");
    do
    {
        ch = getchar();
        putchar(ch);
    }
    while (ch != '\n');
    return 0;
}
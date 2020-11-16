#include <stdio.h>
#include <ctype.h>

int main()
{
    int counter = 0;
    printf("Insert a message: ");
    while (getchar() != '\n') counter++;
    printf("Your message has %d characters.", counter);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    long sum = 0;

    printf("Insert numbers and use 0 to stop:\n");

    while (n != 0)
    {
        printf(">> ");
        scanf("%ld", &n);
        sum += n;
    }

    printf("Sum: %ld", sum);
    return 0;
}
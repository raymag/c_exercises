#include <stdio.h>
#include <stdbool.h>

int main()
{
    long n, digit;
    bool digits_seen[10] = {false};

    printf("Insert a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n%10;
        if (digits_seen[digit])
            break;
        digits_seen[digit] = true;
        n /= 10;
    }

    if (n>0)
        printf("Repeated");
    else 
        printf("Not Repeated");

    return 0;
}
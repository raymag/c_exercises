#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    long sum = 0;
    long n;
    bool receiving = true;

    printf("Insert one number per line (insert 0 to stop):\n");
    while (receiving)
    {
        printf(">> ");
        if (scanf(" %ld", &n) != 1 || n == 0)
        {
            receiving = false;
        }
        else sum += n;
    }

    printf("The sum is %ld.", sum);
    return 0;
}
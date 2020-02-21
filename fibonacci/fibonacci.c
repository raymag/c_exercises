#include <stdio.h>

int main()
{
    int amount = 0;
    printf("Amount of fibonacci numbers to find: ");
    scanf("%i", &amount);

    int penult = 1;
    int last = 1;
    printf("\nFibonacci Sequence: \n");
    printf("\n1\n1");
    for(int i=0;i<amount;i++)
    {
        int current = penult+last;
        printf("\n%i", current);
        last = penult;
        penult = current;
    }

    return 0;
}

#include <stdio.h>
#define N 10

int main()
{
    int numbers[N];
    printf("Insert %d numbers:\n", N);
    for (int i=0;i<N;i++)
    {
        printf(">> ");
        scanf("%d", &numbers[i]);
    }

    printf("\nReversed numbers: ");
    for (int i=N-1;i>0;i--)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
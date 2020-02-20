#include <stdio.h>

int factorial(int num, int result)
{
    if(num == 0){
        return result;
    }
    factorial(num-1, result*num);
}

int main()
{
    int num = 0;
    printf("Factorial of? ");
    scanf("%i", &num);
    printf("Factorial of %i is %i", num, factorial(num, 1));
    return 0;
}

# include <stdio.h>

int main()
{
    float a, b, r;
    char op;

    printf("Insira um numero, a operacao e outro numero: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op)
    {
    case '+':
        r = a + b;
        printf("%.2f %c %.2f = %.2f", a, op, b, r);
        break;
    case '-':
        r = a - b;
        printf("%.2f %c %.2f = %.2f", a, op, b, r);
        break;
    case '*':
        r = a * b;
        printf("%.2f %c %.2f = %.2f", a, op, b, r);
        break;
    case '/':
        r = a / b;
        printf("%.2f %c %.2f = %.2f", a, op, b, r);
        break;
    }

    return 0;
}
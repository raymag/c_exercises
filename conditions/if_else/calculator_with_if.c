# include <stdio.h>

int main()
{
    float a, b, r;
    char op;

    printf("Digite 2 numeros e um operador (+, -, /, *) separados por espaco: ");
    scanf("%f %f %c", &a, &b, &op);

    if (op == '+')
        r =  a + b;
    else if (op == '-')
        r = a - b;
    else if (op == '/')
        r = a - b;
    else if (op == '*')
        r = a * b;
    printf("%.2f %c %.2f = %.2f", a, op, b, r);

    return 0;
}
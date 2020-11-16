# include <stdio.h>

int main()
{
    float sal, sal_final;
    char categoria;

    printf("Insira o salario e a categoria separados por espaco: ");
    scanf("%f %c", &sal, &categoria);

    if (categoria == 'm')
    {
        sal_final = sal * 1.1;
        printf("Salario reajustado: R$ %.2f", sal_final);
    }
    else if (categoria == 'h')
    {
        sal_final = sal * 1.2;
        printf("Salario reajustado: R$ %.2f", sal_final);
    }
    else
        printf("Categoria invalida");
    

    return 0;
}
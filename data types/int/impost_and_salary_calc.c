# include <stdio.h>

int main()
{
    int opt;

    printf("Menu:\n\n");
    printf("1. Imposto\n");
    printf("2. Novo Salario\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opt);
    
    if (opt == 1)
    {
        float sal, imposto;

        printf("\nSalario: ");
        scanf("%f", &sal);

        if (sal < 500)
            imposto = sal * .05;
        else if (sal >= 500 && sal <= 850)
            imposto = sal * .1;
        else if (sal > 850)
            imposto = sal * .15;
        
        printf("Imposto: R$ %.2f", imposto);
    }
    else if (opt == 2)
    {
        float sal, sal_final;

        printf("Salario: R$ ");
        scanf("%f", &sal);

        if (sal > 1500)
            sal_final = sal + 25;
        else if (sal >= 750 && sal <= 1500)
            sal_final = sal + 50;
        else if (sal >= 450 && sal < 750)
            sal_final = sal + 75;
        else if (sal < 450)
            sal_final = sal + 100;
        
        printf("Salario final: R$ %.2f", sal_final);
    }
    else
        printf("\nOpcao invalida");

    return 0;
}
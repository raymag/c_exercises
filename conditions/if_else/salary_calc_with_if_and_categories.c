# include <stdio.h>

int main()
{
    float sal, sal_final;
    int cod;

    printf("Insira um codigo e um salario separados por espaco: ");
    scanf("%d %f", &cod, &sal);

    if (cod == 1)
    {
        sal_final = sal * 1.5;
        printf("\nCargo: Professor");
        printf("\nAumento: R$ %.2f", sal * .5);
        printf("\nSalario Reajustado: R$ %.2f", sal_final);
    }
    else if (cod == 2)
    {
        sal_final = sal * 1.35;
        printf("\nCargo: Secretario");
        printf("\nAumento: R$ %.2f", sal*.35);
        printf("\nSalario Reajustado: R$ %.2f", sal_final);
    }
    else if (cod == 3)
    {
        sal_final = sal * 1.2;
        printf("\nCargo: Programador");
        printf("\nAumento: R$ %.2f", sal*.2);
        printf("\nSalario Reajustado: R$ %.2f", sal_final);
    }
    else if (cod == 4)
    {
        sal_final = sal * 1.1;
        printf("\nCargo: Analista de Sistemas");
        printf("\nAumento: R$ %.2f", sal*.1);
        printf("\nSalario Reajustado: R$ %.2f", sal_final);
    }
    else if (cod == 5)
    {
        printf("\nCargo: Gerente");
        printf("\nAumento: R$ 0.00");
        printf("\nSalario: R$ %.2f", sal);
    }

    return 0;
}
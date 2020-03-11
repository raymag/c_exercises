#include <stdio.h>
/*
Construa um algoritmo que receba o n�mero de horas trabalhadas e valor do
sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras abaixo:
� A hora trabalhada vale a metade do sal�rio m�nimo;
� O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
� O imposto equivale a 3 % do sal�rio bruto;
� O salario a receber equivale ao sal�rio bruto menos imposto.
*/

int main()
{
    float salary, minimum_salary, hours_work;

    printf("Salario minimo: ");
    scanf("%f", &minimum_salary);
    printf("Horas trabalhadas: ");
    scanf("%f", &hours_work);

    salary = hours_work * (minimum_salary/hours_work) * .97;
    printf("Salario: R$ %.2f", salary);

    return 0;
}


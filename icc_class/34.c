#include <stdio.h>
/*
Construa um algoritmo que receba o número de horas trabalhadas e valor do
salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
• A hora trabalhada vale a metade do salário mínimo;
• O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
• O imposto equivale a 3 % do salário bruto;
• O salario a receber equivale ao salário bruto menos imposto.
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


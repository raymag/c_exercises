#include <stdio.h>
/*
Construa um algoritmo que receba o número de horas trabalhadas, o valor do
salário mínimo e o número de horas extras trabalhadas. Calcule e mostre o
salário a receber seguindo as regras a seguir:
• A hora trabalhada vale 1/8 do salário mínimo;
• A hora extra vale 1⁄4 do salário mínimo;
• O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
• A quantia a receber pelas horas extras equivale ao número de horas extras
trabalhadas multiplicadas pelo valor da hora extra;
• O salário a receber equivale ao salário bruto mais a quantia a receber
pelas horas extras;
*/

int main()
{
    float salary, minimum_salary, hours_work, extra_hours;

    printf("Salario minimo: ");
    scanf("%f", &minimum_salary);
    printf("Horas trabalhadas: ");
    scanf("%f", &hours_work);
    printf("Horas extras trabalhadas: ");
    scanf("%f", &extra_hours);

    salary = hours_work * (minimum_salary * .125) + extra_hours * ( minimum_salary * .25);
    printf("Salario: R$ %.2f", salary);

    return 0;
}


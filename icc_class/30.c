#include <stdio.h>
/*
Criar um algoritmo que efetue o cálculo do salário líquido de um professor. Os
dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e
percentual de desconto do INSS.
*/

int main()
{
    float hour_price, inss, salary;
    int given_classes;

    printf("Valor da hora-aula: ");
    scanf("%f", &hour_price);
    printf("Quantidade de aulas dadas: ");
    scanf("%i", &given_classes);
    printf("Percentual de desconto do INSS: ");
    scanf("%f", &inss);

    salary = hour_price * given_classes * ((100 - inss) /100);
    printf("Salario liquido: R$ %.2f", salary);
    return 0;
}


#include <stdio.h>

/*
5. Considere que, para um automóvel que realizou determinado percurso, tenha-se quilometragem inicial,
 quilometragem final, litros consumidos e capacidade do tanque de combustível.
 Faça um algoritmo que mostre um relatório contendo, além desses dados,
 qual o consumo do automóvel em km/litros e qual a sua autonomia (distância percorrida com o combustível existente).
 Utilize modularização por função para realizar os cálculos requisitados e exibição do relatório em uma mesma função.
*/

void relatorio(float km_i, float km_f, float lit_cons, float cap_tanque)
{
    float perc, consumo, autonomia;

    perc = km_f - km_i;
    consumo = perc/lit_cons;
    autonomia = cap_tanque * consumo;

    printf("\nRelatorio:\n==============================================");
    printf("\nQuilometragem inicial: %.2fKm\n", km_i);
    printf("Quilometragem final: %.2fKm\n", km_f);
    printf("Combustivel consumidos: %.2fL\n", lit_cons);
    printf("Capacidade do tanque: %.2fL\n\n", cap_tanque);

    printf("Distancia percorrida: %.2fKm\n", perc);
    printf("Consumo no percusso: %.2fKm/L\n", consumo);
    printf("Autonomia: %.2fKm\n", autonomia);
}

int main()
{
    float km_i, km_f, lit_cons, cap_tanque;

    printf("Quilometragem inicial: ");
    scanf("%f", &km_i);
    printf("Quilometragem final: ");
    scanf("%f", &km_f);
    printf("Combustivel consumidos (L): ");
    scanf("%f", &lit_cons);
    printf("Capacidade do tanque (L): ");
    scanf("%f", &cap_tanque);

    relatorio(km_i, km_f, lit_cons, cap_tanque);

    return 0;
}
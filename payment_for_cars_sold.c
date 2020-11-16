#include <stdio.h>

int main()
{
    int carros_vendidos;
    float total_venda, sal_fixo, comissao, total;

    printf("Total de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Vendas totais: ");
    scanf("%f", &total_venda);
    printf("Salario fixo: ");
    scanf("%f", &sal_fixo);
    printf("Comissao por carro vendido: ");
    scanf("%f", &comissao);

    total = sal_fixo + (comissao*carros_vendidos) + (0.05*total_venda);

    printf("Salario Final: R$ %.2f", total);
    return 0;
}

#include <stdio.h>

int main()
{
    int qnt_fitas, qnt_fitas_final;
    float val_aluguel, fat_ano, lucro_multa_mes;

    printf("Quantidade de fitas: ");
    scanf("%d", &qnt_fitas);
    printf("Valor do aluguem: R$: ");
    scanf("%f", &val_aluguel);

    fat_ano = (qnt_fitas/3.0) * val_aluguel;
    lucro_multa_mes = (qnt_fitas/3.0) * 0.1 * 0.1;
    qnt_fitas_final = qnt_fitas - (qnt_fitas * 0.02) + (qnt_fitas * 0.1);

    printf("\nFaturamento anual: R$ %.2f", fat_ano);
    printf("\nLucro por multas no mes: R$ %.2f", lucro_multa_mes);
    printf("\nQuantidade de fitas no final do ano: %d", qnt_fitas_final);
    return 0;
}

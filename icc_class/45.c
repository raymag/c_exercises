#include <stdio.h>
/*
Um hotel deseja fazer uma promoção especial de final de semana, concedendo
um desconto de 25% na diária. Sendo informados, através do teclado, o número
de apartamentos do hotel e o valor da diária por apartamento para o final de
semana completo, elabore um programa para calcular:
• Valor promocional da diária;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja
100%;
• Valor total a ser arrecadado caso a ocupação neste final de semana atinja
70%;
• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a
ocupação atinja 100%.
*/

int main()
{
    float day_val, promo_day_val, total_100, total_70, lost_promo;
    int ap_num;

    printf("Quantidade de apartamentos: ");
    scanf("%i", &ap_num);
    printf("Valor da diaria: ");
    scanf("%f", &day_val);

    promo_day_val = day_val * .75;
    total_100 = ap_num * promo_day_val * 2;
    total_70 = (ap_num * .70) * promo_day_val * 2;
    lost_promo = total_100 - (ap_num * day_val);

    printf("\nDiaria Promocional: R$ %.2f", promo_day_val);
    printf("\nTotal arrecadado a 100%: R$ %.2f", total_100);
    printf("\nTotal arrecadado a 70%: R$ %.2f", total_70);
    printf("\nPrejuizo pela promocao: R$ %.2f", lost_promo);

    return 0;
}


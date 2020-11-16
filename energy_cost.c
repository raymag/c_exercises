#include <stdio.h>

int main()
{
    float sal_min, quilowatts, val_quilowatt, val, val_desconto;

    printf("Salario Minimo: ");
    scanf("%f", &sal_min);
    printf("Quilowatts: ");
    scanf("%f", &quilowatts);

    val_quilowatt = (sal_min/7.0)/100.0;
    val = val_quilowatt * quilowatts;
    val_desconto = 0.9 * val;

    printf("\nValor de cada Quilowatt: R$ %.2f", val_quilowatt);
    printf("\nValor total a pagar: R$ %.2f", val);
    printf("\nValor total com desconto: R$ %.2f", val_desconto);
    return 0;
}

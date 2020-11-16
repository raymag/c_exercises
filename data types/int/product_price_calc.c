# include <stdio.h>

int main()
{
    int cod_prod, cod_pais;
    float peso_prod, peso_gramas, preco_total, imposto, valor_total;

    printf("Insira o codigo do produto, peso em quilos e codigo do pais: ");
    scanf("%d %f %d", &cod_prod, &peso_prod, &cod_pais);

    peso_gramas = peso_prod * 1000;

    if (cod_prod > 0 && cod_prod <= 4)
        preco_total = peso_gramas * 10;
    else if (cod_prod >= 5 && cod_prod <= 7)
        preco_total = peso_gramas * 25;
    else if (cod_prod >= 8 && cod_prod <= 10)
        preco_total = peso_gramas * 35;

    if (cod_pais == 1)
        imposto = 0;
    else if (cod_pais == 2)
        imposto = preco_total * .15;
    else if (cod_pais == 3)
        imposto = preco_total * .25;

    valor_total = preco_total + imposto;

    printf("\nPeso em gramas: %.2f", peso_gramas);
    printf("\nPreco do produto: R$ %.2f", preco_total);
    printf("\nImposto: R$ %.2f", imposto);
    printf("\nValor total: R$ %.2f", valor_total);

    return 0;
}
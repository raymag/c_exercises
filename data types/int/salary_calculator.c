#include <stdio.h>

/*
Construa um algoritmo que receba o número de horas trabalhadas, o valor do salário-mínimo e o número de horas extras trabalhadas. 
Calcule e mostre o salário a receber seguindo as regras a seguir:
• Crie uma função para calcular o salário bruto do trabalhando.
Todas as informações necessárias para o cálculo devem ser passadas por parâmetro.
• Crie uma função para calcular o salário líquido.
Todas as informações necessárias para o cálculo devem ser passadas por parâmetro.
• A hora trabalhada vale 1/8 do salário-mínimo;• A hora extra vale ¼ do salário-mínimo;
• O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
• A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicadas pelo valor da hora extra;
• O imposto equivale a 3 % do salário bruto;• O salário a receber equivale ao salário bruto mais a quantia a receber pelas 
horas extras menos imposto.
*/

float calc_sal_bruto(float h_trabalhadas, float sal_min)
{
    float sal_bruto, v_h_trabalhadas;

    v_h_trabalhadas = sal_min/8;
    sal_bruto = h_trabalhadas * v_h_trabalhadas;

    return sal_bruto;
}

float calc_sal_liq(float sal_bruto, float sal_min, float h_extras)
{
    float sal_liq, v_h_extras;

    v_h_extras = sal_min/4;
    sal_liq = (sal_bruto*0.97) + (h_extras * v_h_extras);

    return sal_liq;
}

int main()
{
    float sal_min, h_trabalhadas, h_extras, sal_f;

    printf("Valor do salario minimo: R$ ");
    scanf("%f", &sal_min);
    printf("Horas trabalhadas: ");
    scanf("%f", &h_trabalhadas);
    printf("Horas extra: ");
    scanf("%f", &h_extras);

    printf("Salario a receber: R$ %.2f", calc_sal_liq(calc_sal_bruto(h_trabalhadas, sal_min), sal_min, h_extras));
    
    return 0;
}
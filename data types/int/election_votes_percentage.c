#include <stdio.h>

/*
4. Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o número total de eleitores,
o número de votos do primeiro candidato e o número de votos do segundo candidato.
Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos e o percentual de votos nulos.
Utilize modularização por função para realizar o cálculo do percentual. 
*/

float percentual(float numerador, float denominador)
{
    float percentual;

    percentual = (numerador/denominador) * 100;

    return percentual;
}

int main()
{
    int eleitores, v1, v2;

    printf("Total de eleitores: ");
    scanf("%d", &eleitores);
    printf("Total de votos para o candidato A: ");
    scanf("%d", &v1);
    printf("Total de votos para o candidato B: ");
    scanf("%d", &v2);

    if (v1+v2 > eleitores){
        printf("Nao se pode haver mais votos do que eleitores.");
    } else {
        printf("Percentual de votos para candidato A: %.2f%%\n", percentual(v1, eleitores));
        printf("Percentual de votos para candidato B: %.2f%%\n", percentual(v2, eleitores));
        printf("Percentual de votos nulos: %.2f%%\n", percentual( (eleitores-(v1+v2)), eleitores));
    }

    return 0;
}
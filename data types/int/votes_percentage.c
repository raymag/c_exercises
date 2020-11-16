#include <stdio.h>

/*
 1. Escreva um algoritmo para ler o número total de eleitores de um município,
 o número de votos brancos, nulos e válidos.
 Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
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
    int eleitores, v_branco, v_nulo, v_valido;
    float p_brancos, p_nulo, p_valido;

    printf("Numero de eleitores: ");
    scanf("%d", &eleitores);
    printf("Numero de votos brancos: ");
    scanf("%d", &v_branco);
    printf("Numero de votos nulos: ");
    scanf("%d", &v_nulo);
    printf("Numero de votos validos: ");
    scanf("%d", &v_valido);

    if ( (v_branco + v_nulo + v_valido) > eleitores){
        printf("Os votos nao podem superar o numero de eleitores.");
    } else {
        printf("Percentual de votos brancos em relacao ao numero de eleitores: %.2f%%\n", percentual(v_branco, eleitores));
        printf("Percentual de votos nulos em relacao ao numero de eleitores: %.2f%%\n", percentual(v_nulo, eleitores));
        printf("Percentual de votos validos em relacao ao numero de eleitores: %.2f%%\n", percentual(v_valido, eleitores));
        
    }

    return 0;
}
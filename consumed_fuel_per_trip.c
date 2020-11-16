#include <stdio.h>

int main()
{
    float combustivel, tempo, vel, distancia;

    printf("Tempo de viagem (horas): ");
    scanf("%f", &tempo);
    printf("Velocidade media (km/h): ");
    scanf("%f", &vel);

    distancia = vel * tempo;
    combustivel = distancia/12.0;

    printf("\nVelocidade Media: %.2f Km/h", vel);
    printf("\nTempo de viagem: %.2f h", tempo);
    printf("\nDistancia percorrida: %.2f Km", distancia);
    printf("\nCombustivel gasto: %.2f L", combustivel);
    return 0;
}

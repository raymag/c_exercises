#include <stdio.h>
/*
O sistema de avalia��o de determinada disciplina � composto por tr�s provas. A
primeira prova tem peso 2, a segunda prova tem peso 3 e a terceira prova tem
peso 5. Fa�a um algoritmo para calcular a m�dia (m�dia ponderada) final de um
aluno dessa disciplina.
*/

int main()
{
    float first, second, third, mean;
    printf("Nota da prova 1: ");
    scanf("%f", &first);
    printf("Nota da prova 2: ");
    scanf("%f", &second);
    printf("Nota da prova 3: ");
    scanf("%f", &third);

    mean = (first*2 + second*3 + third*5)/10;
    printf("A media da nota do aluno e %.2f", mean);


    return 0;
}


#include <stdio.h>

/*
2. O sistema de avaliação de determinada disciplina é composto por três provas. 
A primeira prova tem peso 2, a segunda prova tem peso 3 e a terceira prova tem peso 5. 
Faça um algoritmo para calcular a média (média ponderada) final de dois alunos dessa disciplina.
Utilize modularização por função para realizar o cálculo da média ponderada. 
*/

float w_mean_of_three(float n1, float n2, float n3)
{
    float mean;

    mean = ((n1*2) + (n2*3) + (n3*5))/(2+3+5);

    return mean;
}

int main()
{
    float a1, a2, a3, b1, b2, b3;

    printf("Notas do primeiro aluno separadas por espaco (prova 1, 2, 3): ");
    scanf("%f %f %f", &a1, &a2, &a3);
    printf("Notas do segundo aluno separadas por espaco (prova 1, 2, 3): ");
    scanf("%f %f %f", &b1, &b2, &b3);

    printf("Media ponderada do primeiro aluno: %.2f\n", w_mean_of_three(a1, a2, a3));
    printf("Media ponderada do segundo aluno: %.2f\n", w_mean_of_three(b1, b2, b3));
    
    return 0;
}
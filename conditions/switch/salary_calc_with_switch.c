# include <stdio.h>

int main() 
{
    float sal, final_sal;
    char category;

    printf("Insira um salario e uma categoria: ");
    scanf("%f %c", &sal, &category);

    switch (category)
    {
    case 'm':
        final_sal = sal * 1.1;
        printf("Salario reajustado: R$ %.2f", final_sal);
        break;
    case 'h':
        final_sal = sal * 1.2;
        printf("Salario reajustado: R$ %.2f", final_sal);
        break;
    
    default:
        printf("Categoria invalida.");
        break;
    }

    return 0;
}
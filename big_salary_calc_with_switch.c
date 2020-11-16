    # include <stdio.h>

    int main()
    {
        float sal, sal_coef, brute_sal, tax, grat, food_aux, liq_sal;
        int hours_of_work;
        char turn, category;

        printf("Insira o salario minimo, turno, categoria e horas trabalhadas: ");
        scanf("%f %c %c %d", &sal, &turn, &category, &hours_of_work);

        switch (turn)
        {
            case 'M':
                sal_coef = sal * 0.1;
                break;
            case 'V':
                sal_coef = sal * 0.15;
                break;
            case 'N':
                sal_coef = sal * 0.12;
                break;
        }

        brute_sal = hours_of_work * sal_coef;

        switch (category)
        {
            case 'O':
                if (brute_sal >= 300)
                    tax = brute_sal * .05;
                else if (brute_sal < 300)
                    tax = brute_sal * .03;
                break;
            case 'G':
                if (brute_sal >= 400)
                    tax = brute_sal * .06;
                else if (brute_sal < 400) 
                    tax = brute_sal * .04;
                break;
        }

        if (turn == 'N' && hours_of_work > 80)
        {
            grat = 50;
        }
        else
            grat = 30;
        
        if (category == 'O' || sal_coef <= 25)
        {
            food_aux = brute_sal / 3;
        } 
        else
        {
            food_aux = brute_sal / 2;
        }
        
        liq_sal = brute_sal - tax + grat + food_aux;

        printf("\nCoeficiente de salario: R$ %.2f", sal_coef);
        printf("\nSalario Bruto: R$ %.2f", brute_sal);
        printf("\nImposto: R$ %.2f", tax);
        printf("\nGratificacao: R$ %.2f", grat);
        printf("\nAuxilio alimentacao: R$ %.2f", food_aux);
        printf("\nSalario liquido: R$ %.2f", liq_sal);

        return 0;
    }
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void drawtreugolnik(double a, double h)
{
    if (a <= 0 || h <= 0)
    {
        printf("Ошибка: высота и длина должны быть положительными!\n");
        return;
    }

    int shirina = h;
    double shag = a / (2 * shirina - 1);

    for (int i = 1; i <= shirina; i++)
    {
        int symbols = (2 * i - 1) * shag;
        int probel = (a - symbols) / 2;

        for (int j = 0; j < probel; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < symbols; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main() 
{
    setlocale(LC_ALL, "RUS");
    double dlina, vysota;
    
    for (int continueprogram = 1; continueprogram == 1;)
    {
        printf("Введите длину треугольника:\n");
        scanf("%lf", &dlina);
        printf("Введите высоту треугольника:\n");
        scanf("%lf", &vysota);

        printf("\nРавнобедренный треугольник:\n");
        printf("----------------------------\n\n");

        drawtreugolnik(dlina, vysota);
        printf("\n----------------------------\n");
        printf("\nПродолжить? (Да - введите 1, Нет - введите 0):\n");
        scanf("%d", &continueprogram);

        printf("\n");
    }
    printf("Программа завершена!\n");
    
    return 0;
}
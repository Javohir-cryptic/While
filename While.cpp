#include <stdio.h>
#include <iostream>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    float S = 0, z = 1, c = 1, d = 2, a = 0.5;
    setlocale(LC_ALL, "Rus");
    while (a > 0.001)
    {
        S = S + a * z;
        z = -z;
        c++;
        d = d * 2;
        a = c / d;
    }
    printf("Сумма S = %f", S);
    getchar();
}
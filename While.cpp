//Ввести натуральное число и определить, сколько в нем цифр.
#include <stdio.h>
#include <iostream>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    int N, count = 0;
    setlocale(LC_ALL, "Rus");
    printf("Введите натуралное число: ");
    scanf("%d", &N);
    while (N > 0)
    {
        N /= 10;
        count++;
    }
    printf("В этом числе %d цифр\n", count);
    getchar();
}
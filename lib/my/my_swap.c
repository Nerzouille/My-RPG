/*
** EPITECH PROJECT, 2023
** c poll day04
** File description:
** my_swap
*/
#include <unistd.h>

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

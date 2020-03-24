/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp.c
*/

#include <stdlib.h>

int my_strncmp(char const *stack1, char const *stack2, int i)
{
    int n = 0;
    int o = 0;
    int p = 0;

    while (stack1[n] != '\0')
        n += 1;
    if (i > n)
        return (0);
    for (int a = 0; stack1[a] != '\0'; a += 1)
        o = o + stack1[n];
    for (int b = 0; stack2[b] != '\0'; b += 1)
        p = p + stack2[n];
    o = o - p;
    return (o);
}
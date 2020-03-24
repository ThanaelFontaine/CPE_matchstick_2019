/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include <stdio.h>

char *my_strcat(char *str, char const *source)
{
    int i = 0;
    int a = 0;

    while (str[i] != '\0')
        i += 1;
    while (source[a] != '\0') {
        str[i] = source[a];
        i += 1;
        a += 1;
    }
}
/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** ia.c
*/

#include "include/second_one.h"

int ai(info_t *info)
{
    int i = 0;

    my_putstr("\nAI's turn...\n");
    for (; info->table[i]; i += 1)
        for (int j = my_strlen(info->table[i]) - 1; j >= 0; j -= 1)
            if (info->table[i][j] == '|') {
                my_printf("AI removed 1 match(es) from line %d\n", i);
                info->table[i][j] = ' ';
                return (0);
            }
    return (0);
}
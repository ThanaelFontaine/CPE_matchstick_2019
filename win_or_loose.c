/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** win_or_loose.c
*/

#include "include/second_one.h"

int win(info_t *info)
{
    for (int i = 0; info->table[i]; i += 1)
        if (win_2(info, i) == 1)
            return (0);
    return (1);
}

int win_2(info_t *info, int i)
{
    for (int j = 0; info->table[i][j]; j += 1)
        if (info->table[i][j] == '|')
            return (1);
    return (0);
}
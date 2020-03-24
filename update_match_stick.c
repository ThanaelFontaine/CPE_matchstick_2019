/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** update_match_stick.c
*/

#include "include/second_one.h"

int count_space_stick(info_t *info)
{
    for (int i = 0; info->table[info->select_floor][i] != '|' &&
    info->table[info->select_floor][i] != '\0'; i += 1)
        if (info->table[info->select_floor][i] == ' ')
            info->count_space += 1;
    for (int i = 0; info->table[info->select_floor][i] != '\0'; i += 1)
        if (info->table[info->select_floor][i] == '|')
            info->count_stick += 1;
    if (info->count_matches_off > info->count_stick)
        return (1);
    return (0);
}

int update_match_stick(info_t *info)
{
    int i = 0;

    count_space_stick(info);
    for (int position = my_strlen(info->table[info->select_floor]) - 1;
    i < info->count_matches_off && position >= 0; position -= 1) {
        if (info->table[info->select_floor][position] == '|') {
            info->table[info->select_floor][position] = ' ';
            i += 1;
        }
    }
    for (i = 0; i <= info->floor + 1; i += 1) {
        my_putstr(info->table[i]);
        my_putchar('\n');
    }
    return (0);
}
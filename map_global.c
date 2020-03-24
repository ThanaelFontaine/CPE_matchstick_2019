/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** map_global.c
*/

#include "include/second_one.h"

int match_stick(info_t *info)
{
    info->count = 1;
    info->pos = 1;
    info->table = malloc(sizeof(char *) * (info->floor + 3));

    info->table[info->floor + 2] = NULL;
    for (int i = 0; i < info->floor + 2; i += 1)
        info->table[i] = malloc(sizeof(char) * ((info->floor + 1) * 2));
    for (int i = 0; i < ((info->floor + 1) * 2) - 1; i += 1)
        info->table[0][i] = '*';
    info->table[0][(info->floor + 1) * 2 - 1] = '\0';
    creat_the_sapce_and_pip(info);
    for (int i = 0; i < ((info->floor + 1) * 2) - 1; i += 1)
        info->table[info->count][i] = '*';
    info->table[info->count][((info->floor + 1) * 2) - 1] = '\0';
    for (int i = 0; i <= info->floor + 1; i += 1) {
        my_putstr(info->table[i]);
        my_putchar('\n');
    }
    return (initialize_moove_out_stick(info));
}

void creat_the_sapce_and_pip(info_t *info)
{
    for (int x = 0; x < info->floor; x += 1) {
        info->table[info->count][0] = '*';
        for (int i = 0; i <= (info->floor - x - 1) - 1; i += 1) {
            info->table[info->count][info->pos] = ' ';
            info->pos += 1;
        }
        for (int i = 0; i < (2 * x + 1); i += 1) {
            info->table[info->count][info->pos] = '|';
            info->pos += 1;
        }
        for (int i = 0; i < (info->floor - x - 1); i += 1) {
            info->table[info->count][info->pos] = ' ';
            info->pos += 1;
        }
        info->table[info->count][info->pos] = '*';
        info->pos += 1;
        info->table[info->count][info->pos] = '\0';
        info->count += 1;
        info->pos = 1;
    }
}

int initialize_moove_out_stick(info_t *info)
{
    char *read_line = NULL;
    char *read_matches = NULL;
    info->count_matches_off = 0;
    info->select_floor = 0;
    info->count_stick = 0;
    info->count_space = 0;
    size_t len = 0;

    my_putstr("\nYour turn:\n");
    return (moove_out_stick(info, read_matches, read_line, len));
}

int help_moove_stick_matches(info_t *info)
{
    if (info->count_matches_off > info->stick_off ||
    info->count_matches_off < 0) {
        my_printf("Error: you cannot remove more than %d matches per turn\n"
        , info->stick_off);
        return (4);
    } else if (info->count_matches_off == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (4);
    } else {
        info->count_stick = 0;
        info->count_space = 0;
    }
    return (0);
}
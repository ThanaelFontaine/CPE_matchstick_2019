/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** mouve_out_stick.c
*/

#include "include/second_one.h"

int moove_out_stick(info_t *info, char *read_matches,
char *read_line, size_t len)
{
    while (1) {
        if (help_moove_stick(info, read_line, len) == 4)
            return (0);
        if (getline(&read_matches, &len, stdin) == -1)
            return (0);
        info->count_matches_off = my_getnbr(read_matches);
        if (help_moove_stick_matches(info) == 4)
            continue;
        if (count_space_stick(info)) {
            my_putstr("Error: not enough matches matches ");
            my_putstr("on this line\n");
            continue;
        }
        if (help_moove_matches(info) == 4)
            return (0);
    }
    return (0);
}

int help_moove_matches(info_t *info)
{
    my_printf("Player removed %d match(es) from line %d\n",
    info->count_matches_off, info->select_floor);
    update_match_stick(info);
    if (win(info) == 1) {
        my_printf("You lost, too bad...\n");
        return (4);
    }
    ai(info);
    update_match_stick(info);
    if (win(info) == 1) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        return (4);
    }
    my_putstr("\nYour turn:\n");
    return (0);
}

int help_moove_stick(info_t *info, char *read_line, size_t len)
{
    while (1) {
        my_putstr("Line: ");
        if (getline(&read_line, &len, stdin) == -1)
            return (4);
        info->select_floor = my_getnbr(read_line);
        if (info->select_floor > info->floor || info->select_floor <= 0)
            my_putstr("Error: this line is out of range\n");
        else
            break;
    }
    my_putstr("Matches: ");
    return (0);
}
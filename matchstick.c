/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** matchstick.c
*/

#include "include/second_one.h"

int error_main(char **av)
{
    if (my_str_is_num(av[1]) == 84 || my_str_is_num(av[2]) == 84) {
        write(2, "WARNING: Please use only digits\n", 35);
        return (2);
    }
    return (0);
}

int main(int ac, char **av)
{
    info_t info;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        documentation();
        return (0);
    }
    if (ac != 3) {
        write(2, "WARNING: Please use only 2 arguments\n", 38);
        return (84);
    }
    if (error_main(av) == 2)
        return (84);
    info.floor = my_getnbr(av[1]);
    info.stick_off = my_getnbr(av[2]);
    if (info.floor < 1 || info.stick_off < 1) {
        write(2, "WARNING: Please write a biggest number !\n", 42);
        return (84);
    }
    return (match_stick(&info));
}
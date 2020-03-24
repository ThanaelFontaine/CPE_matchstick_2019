/*
** EPITECH PROJECT, 2019
** librairie
** File description:
** my_str_is_num.c
*/

int my_str_is_num(char const *str)
{
    for (int i = 0; str[i] != '\0'; i += 1)
        if ((str[i] < '0' && str[i] != '\n') || str[i] > '9')
            return (84);
    return (0);
}
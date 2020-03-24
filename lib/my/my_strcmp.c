/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare one string's length to another
*/

int my_strcmp(char const *stack_1, char const *stack_2)
{
    for (int i = 0; stack_1[i] || stack_2[i]; i += 1)
        if (stack_1[i] < stack_2[i] || stack_1[i] > stack_2[i])
            return (stack_1[i] - stack_2[i]);
    return (0);
}
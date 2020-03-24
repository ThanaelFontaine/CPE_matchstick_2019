/*
** EPITECH PROJECT, 2019
** second_one
** File description:
** my_runner.h
*/

#ifndef __MATCHSTICK__
#define __MATCHSTICK__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "my.h"

#ifndef READ_SIZE
#define READ_SIZE 300
#endif

typedef struct info_s
{
    int floor;
    int stick_off;
    int count;
    int pos;
    char **table;
    int count_matches_off;
    int select_floor;
    int count_space;
    int count_stick;
    int result;
} info_t;


int documentation(void);

void creat_the_sapce_and_pip(info_t *info);
int match_stick(info_t *info);
int help_moove_stick_matches(info_t *info);
int initialize_moove_out_stick(info_t *info);

int moove_out_stick(info_t *info, char *read_matches,
char *read_line, size_t len);
int help_moove_stick(info_t *info,  char *read_line, size_t len);
int help_moove_matches(info_t *info);

int main(int ac, char **av);
int error_main(char **av);

int update_match_stick(info_t *info);

int write_lines(info_t *info, char *read_line);
int write_matches(info_t *info, char *read_matches);

int count_space_stick(info_t *info);

int ai(info_t *info);
int check_inside(info_t *info, int ligne);
void pip_off(info_t *info, int ligne);

int win(info_t *info);
int win_2(info_t *info, int i);

#endif /*_MATCHSTICK_*/
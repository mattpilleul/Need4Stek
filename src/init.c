/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "get_next_line.h"
#include "basic.h"
#include "n4s.h"

void initialize_car(car_t *data)
{
    data->left = 0;
    data->middle = 0;
    data->right = 0;
    data->speed = 0.5;
    write(1, "START_SIMULATION\n", strlen("START_SIMULATION\n"));
}

int catch_info(car_t *data)
{
    char *str;
    char **tab;

    speed_manage(data->speed);
    while (1) {
        write(1, "GET_INFO_LIDAR\n", strlen("GET_INFO_LIDAR\n"));
        str = get_next_line(0);
        if (check_end(str)) {
            free(str);
            exit(0);
        }
        tab = my_str_to_wordtab(str, ":");
        free(str);
        if (strcmp(tab[1], "OK") == 0)
            start_ia(data, tab);
    }
    return (0);
}
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

int main(int argc, char **argv)
{
    UNUSED(argc);
    UNUSED(argv);
    car_t data;
    char *str;

    initialize_car(&data);
    str = get_next_line(0);
    if (check_end(str)) {
        free(str);
        exit(0);
    }
    free(str);
    if (catch_info(&data) != 0)
        return (84);
    return (0);
}

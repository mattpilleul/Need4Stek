/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "basic.h"
#include "n4s.h"

void speed_manage(double value)
{
    char *str;

    write(1, "CAR_FORWARD:", strlen("CAR_FORWARD:"));
    dprintf(1, "%.2f", value);
    write(1, "\n", strlen("\n"));
    str = get_next_line(0);
    if (check_end(str) == 1) {
        free(str);
        exit(0);
    }
    free(str);
}

/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <unistd.h>
#include "basic.h"
#include "n4s.h"

int check_end(char *string)
{
    if (strcmp(string, "Track Cleared") == 0) {
        write(1, "STOP_SIMULATION\n", strlen("STOP_SIMULATION\n"));
        return (1);
    }
    return (0);
}

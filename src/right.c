/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "n4s.h"

void right_direction(car_t *data)
{
    int i = 0;

    while (i <= 4) {
        if (data->middle < suround2[i]) {
            apply_direction(direction2[i], 1);
            i = 10;
        } else
            i++;
    }
    if (i == 5)
        apply_direction(direction2[i], 1);
}
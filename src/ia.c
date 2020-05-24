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

int start_ia(car_t *data, char **size)
{
    data->left = atof(size[3]);
    data->middle = atof(size[18]);
    data->right = atof(size[34]);
    data->left > data->right ? left_direction(data) : right_direction(data);
    if (check_end(size[35]))
        exit(0);
    return (0);
}

void manage_speed(car_t *data)
{
    int i = 0;

    while (i <= 6) {
        if (data->middle > indic_mid[i]) {
            speed_manage(speedmeter[i]);
            i = 10;
        } else
            i++;
    }
    if (i == 7)
        speed_manage(speedmeter[i]);
}

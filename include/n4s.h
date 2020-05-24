/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#ifndef N4S_H_
#define N4S_H_

#include <string.h>

#define UNUSED(x) (void)x

typedef struct car {
    double left;
    double right;
    double middle;
    double speed;
} car_t;

int start_ia(car_t *info, char **tab);
void left_direction(car_t *data);
void right_direction(car_t *data);
void initialize_car(car_t *data);
int catch_info(car_t *data);
void manage_speed(car_t *info);
void speed_manage(double value);
void apply_direction(double value, int neg);
int check_end(char *str);

extern const double direction[6];
extern const int suround[5];

extern const double direction2[6];
extern const int suround2[5];

extern const double speedmeter[8];
extern const int indic_mid[7];

#endif

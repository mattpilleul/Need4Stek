/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/

#include <stdlib.h>
#include "basic.h"

int word_count(char const *str, char *space)
{
    int i = 0;
    int nb = 0;

    while (str[i]) {
        if (str[i] == space[0])
            nb++;
        i++;
    }
    return (nb + 1);
}

char **my_str_to_wordtab(char *str, char *space)
{
    char **tab = malloc(sizeof(char *) * (word_count(str, space) + 2));
    int i = 0;
    int j = 0;
    int k;

    while (str[i] != '\0') {
        k = -1;
        if ((tab[j] = malloc(sizeof(char) * (256))) == NULL)
            return (NULL);
        while (str[i] != '\0' && (str[i] != space[0]))
            tab[j][++k] = str[i++];
        tab[j][++k] = '\0';
        if (tab[j][0] != '\0')
            j++;
        if (str[i] != '\0')
            i++;
    }
    tab[j] = NULL;
    return (tab);
}

/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main for pong
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check(char *src)
{
    int z;

    z = 0;
    while (src[z] != '\0'){
        if (src[z] >= '0' && src[z] <= '9' ||
            src[z] == '.' || src[z] == '-'){
            z ++;
            if (src[z] == '\0')
                return (1);
        } else
            return(84);
    }
}
int check_int(char *str)
{
    int a;

    a = 0;
    while (str[a] != '\0'){
        if (str[a] == '.'){
            printf("Syntax Error\n");
            exit(84);
        }
        a = a + 1;
    }
    return 0;
}

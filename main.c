/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** dazd
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int z = 1;
    int n;

    if (argc == 8){
        t_point vec1;
        t_point vec2;
        while (z != argc){
            if (check(argv[z]) == 1)
                z = z + 1;
            else
                exit(84);
        }   
        vec1.x = atof(argv[1]);
        vec1.y = atof(argv[2]);
        vec1.z = atof(argv[3]);
        vec2.x = atof(argv[4]);
        vec2.y = atof(argv[5]);
        vec2.z = atof(argv[6]);
        if (argv[7][0] == '-'){
            exit(84);
        } else {
            check_int(argv[7]);
            n = atoi(argv[7]);
        }
        pong(vec1, vec2, n);
    } else
        exit(84);
}

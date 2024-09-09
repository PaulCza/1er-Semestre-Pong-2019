/*
** EPITECH PROJECT, 2019
** pong.c
** File description:
** calcul de vecteurs :sweating:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my.h"

int pong(t_point pt1, t_point pt2, int n)
{
    t_speed speed_vector;
    t_point pos_n;

    speed_vector.x = pt2.x - pt1.x;
    speed_vector.y = pt2.y - pt1.y;
    speed_vector.z = pt2.z - pt1.z;
    display_speed_vec(speed_vector);
    pos_n.x = pt2.x + (n * speed_vector.x);
    pos_n.y = pt2.y + (n * speed_vector.y);
    pos_n.z = pt2.z + (n * speed_vector.z);
    display_final_pos(pos_n, n);
    if (speed_vector.z != 0 && ((-pt2.z)/speed_vector.z) >= 0 && pt2.x != 0){
        calc_angle(speed_vector);
        return (0);
    }else{
        printf("The ball won't reach the paddle.\n");
        return (0);
    }
    exit(84);
}

int calc_angle(t_speed s_vec)
{
    double angle_rad;
    double angle;

    angle_rad = acos(s_vec.z/(sqrt(pow(s_vec.x, 2) + pow(s_vec.y, 2) + pow(s_vec.z, 2))));
    angle = 180*(angle_rad - (M_PI/2))/M_PI;
    angle = fabs(angle);
    printf("The incidence angle is:\n");
    printf("%.2f degrees\n", angle);
    return (0);
}

int display_speed_vec(t_speed vec)
{
    printf("The velocity vector of the ball is:\n(%.2f;%.2f;%.2f)\n", vec.x, vec.y, vec.z);
    return (0);
}

int display_final_pos(t_point pos, int n)
{
    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f;%.2f;%.2f)\n", pos.x, pos.y, pos.z);
    return (0);
}

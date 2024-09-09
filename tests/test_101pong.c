/*
** EPITECH PROJECT, 2019
** test_pong.c
** File description:
** fkaezf
*/

#include <criterion/criterion.h>
#include <unistd.h>
#include <criterion/redirect.h>
#include "../my.h"
void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
Test(check_int, return0)
{
    cr_assert_eq(check_int("12"), 0);
}
Test(check_int, exit_code, .exit_code = 84 )
{
    cr_assert_eq(check_int("12.25"), 84);
}
Test(check, return_1)
{
    cr_assert_eq(check("42"), 1);
}
Test(check, return_84)
{
    cr_assert_eq(check("abc"), 84);
}
Test(pong101, fail_bat)
{
    t_point vec1;
    t_point vec2;

    vec1.x = 1;
    vec1.y = 2;
    vec1.z = 3;
    vec2.x = 4;
    vec2.y = 5;
    vec2.z = 6;
    cr_assert_eq(pong(vec1, vec2, 6), 0);
}
Test(pong101, hit_bat)
{
    t_point vec1;
    t_point vec2;

    vec1.x = 1;
    vec1.y = 3;
    vec1.z = 5;
    vec2.x = 7;
    vec2.y = 9;
    vec2.z = 2;
    cr_assert_eq(pong(vec1, vec2, 4), 0);
}


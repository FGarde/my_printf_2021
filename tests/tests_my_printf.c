/*
** EPITECH PROJECT, 2021
** criterion        
** File description:
** criterion
*/

#include "../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>


Test(my_printf, tests_my_printf)
{
    my_printf("hello world");

    cr_assert_stdout_eq_str("hello world");
}
/*
** EPITECH PROJECT, 2021
** disp_starg.c
** File description:
** displays all its arguments
*/

#include "my_lib.h"

char flags[] =
{
            'c',    //chr
            's',    //str
//            'S',    //special str
//            'o',    //octal
//            'e',    //scientific
//            'E',    //same
//            'f',    //float
 //           'F',    //same
 //           'b',    //binary
 //           'B',    //same
 //           'p',    //pointer
 //           'P',    //same
 //           'x',    //hexa
 //           'X',    //same
            'd',    //nbr
            'i',    //same
            'u'    //same
//            '%'     //%
};

void (*fun_ptr[])() = {
    print_char,
    print_str,
//    print_speS,
//    print_octal,
//    print_sci,
//    print_sci,
//    print_float,
//    print_float,
//    print_bin,
//    print_bin
//    print_ptr,
//    print_ptr,
//    print_hexa,
//    print_hexa,
    print_nbr,
    print_nbr,
    print_nbr,
//    print_percentage
};


void find_flag(char c, va_list list, ...)
{
    int i = 0;
    

    while (c != flags[i]) {
        i += 1;
    } 
    (*fun_ptr[i])();
}

void my_printf(char *s, ...)
{
    int i = 0;
    va_list list;
    va_start(list, s);

    while (s[i] != '\0') {
        if (s[i] == '%') {
            i++;
            find_flag(s[i], list, &flags);
        } else {
        my_putchar(s[i]);
        }
        i++;
    }

    va_end(list);
}
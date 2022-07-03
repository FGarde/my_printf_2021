/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** headers
*/
#include <stdarg.h>
#include <stdio.h>

#ifndef MY_H_
    #define MY_H_

    void print_char(char c, va_list);
    void print_nbr(int nb, va_list);
    void print_str(char *str, va_list);
    void print_float(float nbr, va_list);
    void print_octal(void);
    void print_sci(void);
    void print_bin(void);
    void print_ptr(void);
    void print_hexa(void);
    void print_percentage(void);

    void find_flag(char c, va_list, ...);
    void my_printf(char *s, ...);
    void my_putchar(char c);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_getnbr(char const *str);

#endif

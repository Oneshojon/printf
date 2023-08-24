#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int count_string(char *s);
void print_string(char *str);
int count_bin(unsigned int num);
void printer_ui_bin(unsigned int num);
void printer_dec_int(int num);
int count_digits(int num);
void printer_dec_int_rec(int num);
void print_ui_bin_rec(unsigned int num);
void x_recursion(int num);
void print_x(int num);
int count_x(int num);
void print_unsigned_dec_rec(unsigned int num);
void print_unsigned_dec(unsigned int num);
int count_unsigned_dec(unsigned int num);
void octal_recursive(unsigned int num);
void print_octal_num(unsigned int num);
int count_octal_digits(unsigned int num);
void X_recursion(int num);
void print_X(int num);
int count_X(int num);
#endif

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

#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <math.h>

int get_bit(unsigned long int number, unsigned int i);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(char *b);
int set_bit(unsigned long int *number, unsigned int i);
int _putchar(char c);
int clear_bit(unsigned long int *number, unsigned int i);
unsigned int flip_bits(unsigned long int first, unsigned long int second);
int get_endianness(void);

#endif

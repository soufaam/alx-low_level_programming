#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned int number);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif /* MAIN_H */

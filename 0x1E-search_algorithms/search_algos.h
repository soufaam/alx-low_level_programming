#ifndef __search_algos__
#define __search_algos__
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif

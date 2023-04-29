#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

void print_hello(void) __attribute__ ((constructor));

void print_hello(void) {
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}


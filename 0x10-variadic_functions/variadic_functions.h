#ifndef VAR_FUNCTIONS
#define VAR_FUNCTIONS

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

unsigned int _strlen(const char * const str);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* for VAR_FUNCTIONS */

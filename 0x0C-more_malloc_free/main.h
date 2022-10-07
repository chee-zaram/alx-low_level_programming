#ifndef MAIN_H
#define MAIN_H
#define YES	1
#define NO	0

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void ErrorMsg(void);
void _print_str(char *str, unsigned int len);
int check_non_digit(char *str);
int _putchar(char c);
unsigned int _strlen(char *str);

#endif /* for MAIN_H */

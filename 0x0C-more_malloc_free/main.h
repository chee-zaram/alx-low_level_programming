#ifndef MAIN_H
#define MAIN_H
#define BASE_TEN	10

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void print_num(long long num);
void _puts(char *s, short len);
int _putchar(char c);

#endif /* for MAIN_H */

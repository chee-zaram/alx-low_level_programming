#ifndef MAIN_H

#define MAIN_H
#define WORD    1
#define NO_WORD 0
#define TRUE    1
#define FALSE   0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char  *create_array(unsigned int size, char c);
char  *_strdup(char *str);
char  *str_concat(char *s1, char *s2);
int  **alloc_grid(int width, int height);
void   free_grid(int **grid, int height);
char  *argstostr(int ac, char **av);
char **strtow(char *str);
char **str_to_w(char *str, int height, char **mptr);
void   word_len(char *str, int *ptr);
int    word_count(char *str);

#endif /* for MAIN_H */

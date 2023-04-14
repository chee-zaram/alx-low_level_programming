#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1
#define DIFF      (double)(end - beg)
#define INTERPOLATION_FORMULA \
	(beg + ((DIFF / (array[end] - array[beg])) * (value - array[beg])))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* for SEARCH_ALGOS */

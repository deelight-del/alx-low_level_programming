#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int compare_and_print(size_t idx, int val_from_array, int val_to_compare);
void print_array(int *array, int start_idx, int end_idx);
#endif

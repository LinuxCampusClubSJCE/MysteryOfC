#include <stdio.h>
void display(const int *arr) {
    *arr = 10;
    printf("Value: %d\n", *arr);
}
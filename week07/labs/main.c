#include <stdio.h>
#include "array_utilities.h"

int main(void) {
    int numbers[] = {10, 25, 30, 25, 45, -5, 0};
    int size = (int)(sizeof(numbers) / sizeof(numbers[0]));
    int keys[] = {10, 25, 0, -5, 99, 45};
    int num_keys = (int)(sizeof(keys) / sizeof(keys[0]));

    printf("=== Exercise 1: find_index ===\n");
    for (int i = 0; i < num_keys; i++) {
        int key = keys[i];
        int idx = find_index(numbers, size, key);
        if (idx != -1) {
            printf("Key %d FOUND at index %d\n", key, idx);
        } else {
            printf("Key %d NOT FOUND\n", key);
        }
    }

    printf("\n=== Exercise 2: find_pointer ===\n");
    for (int i = 0; i < num_keys; i++) {
        int key = keys[i];
        int *found = find_pointer(numbers, size, key);
        if (found != NULL) {
            printf("Key %d FOUND %d\n", key, *found);
        } else {
            printf("Key %d NOT FOUND\n", key);
        }
    }

    printf("\n=== Exercise 4: count2d ===\n");
    int grid[][COLS] = {
        {1, 5, 2, 5},
        {0, 3, 5, 7},
        {8, 8, 8, 1}
    };
    int rows = (int)(sizeof(grid) / sizeof(grid[0]));

    printf("Count of 5 in grid: %d\n", count2d(grid, rows, 5));
    printf("Count of 8 in grid: %d\n", count2d(grid, rows, 8));
    printf("Count of 99 in grid: %d\n", count2d(grid, rows, 99));

    return 0;
}
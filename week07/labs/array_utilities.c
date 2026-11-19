#include <stddef.h>
#include "array_utilities.h"

int find_index(const int arr[], int size, int key) {
    if (arr == NULL || size <= 0) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int *find_pointer(int arr[], int size, int key) {
    if (arr == NULL || size <= 0) {
        return NULL;
    }

    for (int *ptr = arr; ptr < arr + size; ptr++) {
        if (*ptr == key) {
            return ptr;
        }
    }

    return NULL;
}

int count(int arr[], int size, int key) {
    if (arr == NULL || size <= 0) {
        return 0;
    }

    int total = 0;
    int *current = arr;
    int remaining = size;

    while (remaining > 0) {
        int *found = find_pointer(current, remaining, key);
        if (found == NULL) {
            break;
        }
        total++;
        int consumed = (int)((found - current) + 1);
        current = found + 1;
        remaining -= consumed;
    }

    return total;
}

int count2d(int arr[][COLS], int size, int key) {
    if (arr == NULL || size <= 0) {
        return 0;
    }

    int total = 0;
    for (int row = 0; row < size; row++) {
        total += count(arr[row], COLS, key);
    }

    return total;
}
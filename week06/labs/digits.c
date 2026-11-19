#include "digits.h"

int digits(long n, int *max, int *min) {
    if (n < 0) {
        n = -n;
    }

    int sum = 0;
    int first_digit = n % 10;
    *max = first_digit;
    *min = first_digit;

    do {
        int digit = n % 10;
        sum += digit;
        if (digit > *max) {
            *max = digit;
        }
        if (digit < *min) {
            *min = digit;
        }
        n /= 10;
    } while (n > 0);

    return sum;
}
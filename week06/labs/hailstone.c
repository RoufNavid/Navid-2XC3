#include <stdio.h>

void hailstone(long n) {
    if (n <= 0) {
        printf("Input must be a positive, non-zero integer.\n");
        return;
    }

    if (n == 1) {
        printf("1\n");
        return;
    }

    printf("%ld ", n);

    if (n % 2 == 0) {
        hailstone(n / 2);
    } else {
        hailstone(3 * n + 1);
    }
}

int main(void) {
    printf("Testing a = 3:\n");
    hailstone(3);

    printf("\nTesting a = 1:\n");
    hailstone(1);

    printf("\nTesting a = 0:\n");
    hailstone(0);

    printf("\nTesting a = -5:\n");
    hailstone(-5);

    return 0;
}
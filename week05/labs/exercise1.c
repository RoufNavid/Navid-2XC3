#include <stdio.h>

int main(void) {
    int days, start_day;

    printf("How many days this month? ");
    scanf("%d", &days);

    printf("What's the starting day (1=Monday, 7=Sunday)? ");
    scanf("%d", &start_day);

    printf("\nM  T  W  T  F  S  S\n");

    for (int i = 1; i < start_day; i++) {
        printf("   ");
    }

    for (int day = 1, col = start_day; day <= days; day++, col++) {
        printf("%2d", day);
        if (col % 7 == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    if ((start_day + days - 1) % 7 != 0) {
        printf("\n");
    }

    return 0;
}
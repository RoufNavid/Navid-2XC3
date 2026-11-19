#include <stdio.h>

int main(void) {
    int month, day, year;
    int earliest_month = 0, earliest_day = 0, earliest_year = 0;
    int has_date = 0;

    do {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d /%d /%d", &month, &day, &year);

        if (!(month == 0 && day == 0 && year == 0)) {
            if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
                if (!has_date ||
                    year < earliest_year ||
                    (year == earliest_year && month < earliest_month) ||
                    (year == earliest_year && month == earliest_month && day < earliest_day)) {
                    earliest_month = month;
                    earliest_day = day;
                    earliest_year = year;
                    has_date = 1;
                }
            }
        }
    } while (!(month == 0 && day == 0 && year == 0));

    if (has_date) {
        printf("\nThe earliest valid date is %d/%d/%04d.\n", earliest_month, earliest_day, earliest_year);
    } else {
        printf("\nno dates entered\n");
    }

    return 0;
}
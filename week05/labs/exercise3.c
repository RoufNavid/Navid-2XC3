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
        printf("\nThe earliest valid date is %d ", earliest_day);

        switch (earliest_month) {
            case 1:  printf("January");   break;
            case 2:  printf("February");  break;
            case 3:  printf("March");     break;
            case 4:  printf("April");     break;
            case 5:  printf("May");       break;
            case 6:  printf("June");      break;
            case 7:  printf("July");      break;
            case 8:  printf("August");    break;
            case 9:  printf("September"); break;
            case 10: printf("October");   break;
            case 11: printf("November");  break;
            case 12: printf("December");  break;
        }

        printf(", %04d.\n", earliest_year);
    } else {
        printf("\nno dates entered\n");
    }

    return 0;
}
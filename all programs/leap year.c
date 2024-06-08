// if the given year is leap year then print not leap year in next 10 years....if the given year is not a leap year then print the leap year in next 10 years


#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
        printf("Leap years in the next 10 years:\n");
        for (int i = 1; i <= 10; i++) {
            while (!isLeapYear(year + i))
                year++;
            printf("%d\n", year + i);
        }
    } else {
        printf("%d is not a leap year.\n", year);
        printf("Next leap year in the next 10 years:\n");
        for (int i = 1; i <= 10; i++) {
            while (isLeapYear(year + i))
                year++;
            printf("%d\n", year + i);
        }
    }

    return 0;
}
//leap next 10 decades count 
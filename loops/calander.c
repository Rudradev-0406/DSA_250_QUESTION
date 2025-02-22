// with ai 
#include <stdio.h>

int getFirstDayOfYear(int year) {
    int day = (year * 365 + (year / 4) - (year / 100) + (year / 400)) % 7;
    return day;
}

int isLeapYear(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1;
    }
    return 0;
}

void printCalendar(int year, int month) {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    int day = getFirstDayOfYear(year);
    for (int i = 0; i < month - 1; i++) {
        day = (day + daysInMonth[i]) % 7;
    }

    printf("\n  ------------%s %d-------------\n", months[month - 1], year);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    for (int i = 0; i < day; i++) {
        printf("     ");
    }

    for (int i = 1; i <= daysInMonth[month - 1]; i++) {
        printf("%5d", i);
        if (++day > 6) {
            day = 0;
            printf("\n");
        }
    }
    if (day != 0) {
        printf("\n");
    }
}

int main() {
    int year, month;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a month between 1 and 12.\n");
        return 1;
    }

    printCalendar(year, month);
    return 0;
}
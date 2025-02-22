// with AI

#include <stdio.h>

int getFirstDayOfYear(int year) {
    int day = (year * 365 + (year / 4) - (year / 100) + (year / 400)) % 7;
    return day;
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

void printCalendar(int month, int year) {
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int daysInMonth = getDaysInMonth(month, year);
    int firstDay = getFirstDayOfYear(year);

    for (int i = 1; i < month; i++) {
        firstDay = (firstDay + getDaysInMonth(i, year)) % 7;
    }

    printf("     %s %d\n", months[month - 1], year);
    for (int i = 0; i < 7; i++) {
        printf("%s ", days[i]);
    }
    printf("\n");

    for (int i = 0; i < firstDay; i++) {
        printf("    ");
    }

    for (int day = 1; day <= daysInMonth; day++) {
        printf("%3d ", day);
        if ((day + firstDay) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a value between 1 and 12.\n");
        return 1;
    }

    printCalendar(month, year);
    return 0;
}
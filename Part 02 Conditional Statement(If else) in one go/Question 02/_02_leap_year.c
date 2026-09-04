// any year is input through the keyboard. Write a program to determine whether the year is a leap
// year or not. If the year is a leap year, print "LEAP YEAR". If the year is not a leap year, print
// "NOT A LEAP YEAR".

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("LEAP YEAR");
    } else {
        printf("NOT A LEAP YEAR");
    }

    return 0;
}

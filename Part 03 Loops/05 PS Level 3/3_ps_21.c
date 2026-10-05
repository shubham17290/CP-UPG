//  WAP to print the sum of digits of a given number.specially even one
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    int count = 0;
    int sum = 0;
    int ld = 0;
    while (n != 0) {

        ld = n % 10;
        if (ld % 2 == 0) {
            sum = sum + ld; // this extracts the last digit
        }

        count++;
        n = n / 10; // this extracts the last digit
    }
    printf("Sum of digits: %d\n", sum);
    printf("Total digits: %d\n", count);

    return 0;
}

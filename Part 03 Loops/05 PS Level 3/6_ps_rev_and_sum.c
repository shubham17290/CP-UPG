//  WAP to print the reverse of a given number and sum witht its straight number.

#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    int count = 0;

    int ld = 0;
    int reverse = 0;
    int intered = n;
    while (n != 0) {

        ld = n % 10;
        reverse = reverse * 10 + ld;

        count++;
        n = n / 10; // this extracts the last digit
    }
    int sum = reverse + intered;
    printf("Reverse: %d\n", reverse);
    printf("the sum is %d\n", sum);
    printf("Total digits: %d\n", count);

    return 0;
}

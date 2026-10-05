//  WAP to print the reverse of a given number.

#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    int count = 0;

    int ld = 0;
    int reverse = 0;
    while (n != 0) {

        ld = n % 10;
        reverse = reverse * 10 + ld;
        count++;
        n = n / 10; // this extracts the last digit
    }
    printf("Reverse: %d\n", reverse);
    printf("Total digits: %d\n", count);

    return 0;
}

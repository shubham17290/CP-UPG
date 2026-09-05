// take positive integer input and tell if it is a three digit number or not.
//  three digit number check using logical operators
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    if (n >= 100 && n <= 999) {
        printf("%d is a three digit number\n", n);
    } else {
        printf("%d is not a three digit number\n", n);
    }

    return 0;
}

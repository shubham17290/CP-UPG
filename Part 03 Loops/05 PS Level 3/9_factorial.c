// WAP to print the factorial of a given number.
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i; // logic to calculate factorial
    }
    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}

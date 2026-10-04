// WAP that checks the input number is prime or not using for loop
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            a = 1;
            break;
        }
    }
    if (n == 1) {
        printf("The given number is neither prime nor composite\n");
    }
    if (a == 0) {
        printf("The given number is prime\n");
    } else {
        printf("The given number is not prime\n");
    }
    return 0;
}

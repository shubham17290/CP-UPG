// WAP that checks the input number is prime or not using for loop
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            printf("%d is not prime number\n", n);
            break;
        } else {
            printf("%d is prime number\n", n);
            break;
        }
    }

    return 0;
}

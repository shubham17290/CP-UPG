//  WAP  to print the febonacci series of a given number.
#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    printf("Enter value: ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int sum = 0;

    for (int i = 1; i <= n - 2; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("the fibonacci of : %d is : %d\n", n, sum);

    return 0;
}

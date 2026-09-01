#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the base number : ");
    scanf("%d", &a);
    printf("Enter the exponent number : ");
    scanf("%d", &b);
    long long result = 1;

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    printf("%d^%d = %lld\n", a, b, result); // Output: 32
    return 0;
}

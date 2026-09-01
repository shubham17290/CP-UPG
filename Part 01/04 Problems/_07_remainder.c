#include <stdio.h>

int main() {
    int a, b, r, q;

    printf("Enter value: ");
    scanf("%d %d", &a, &b);
    q = a / b;
    r = a - (b * q);
    printf("The Remainder is : %d\n", r);
    return 0;
}

#include <stdio.h>

int main() {
    int a, b, r;

    printf("Enter value: ");
    scanf("%d %d", &a, &b);
    r = a % b;
    printf("The Remainder is : %d\n", r);
    return 0;
}

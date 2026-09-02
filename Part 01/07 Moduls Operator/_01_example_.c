#include <stdio.h>
int main() {
    int a, b;
    printf("Enter Dividend :\n");
    scanf("%d", &a);
    printf("Enter Divisor :\n");
    scanf("%d", &b);
    int r = a % b;
    printf("Remainder is : %d", r);
    return 0;
}

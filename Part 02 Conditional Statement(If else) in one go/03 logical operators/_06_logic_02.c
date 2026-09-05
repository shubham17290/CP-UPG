#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter value: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
    printf("%d is largest number among 3 numbers \n", largest);
    return 0;
}

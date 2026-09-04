#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("The absolute value of the integer is %d\n", -n);
    } else {
        printf("The absolute value of the integer is %d\n", n);
    }

    return 0;
}

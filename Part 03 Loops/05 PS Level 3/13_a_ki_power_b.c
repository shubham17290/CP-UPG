// WAP to calculate a to the power b

#include <stdio.h>

int main() {

    int a, b, power = 1;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) {
        power *= a;
    }

    printf("Result: %d\n", power);
    return 0;
}

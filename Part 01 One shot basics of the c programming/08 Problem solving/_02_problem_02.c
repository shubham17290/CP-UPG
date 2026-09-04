#include <stdio.h>

int main() {

    float x;
    printf("Please enter your Decimal number here : ");
    scanf("%f", &x);
    int y = x;
    printf("%d\n", y);
    float z;
    z = x - y;
    printf("%.1f\n", z);

    return 0;
}

#include <stdio.h>

int main() {
    float r;
    printf("enter the value of radius : ");
    scanf("%f", &r);
    float pi = 3.14;
    float area = pi * r * r;
    printf("Area of circle is: %.2f\n", area);

    return 0;
}

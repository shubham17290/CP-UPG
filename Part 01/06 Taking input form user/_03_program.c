//  Write the program to calculate the simple interest
#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter you Principle amount : ");
    scanf("%f", &p);
    printf("Enter you Rate : ");
    scanf("%f", &r);
    printf("Enter you Time : ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("Simple Interest is: %f\n", si);

    return 0;
}

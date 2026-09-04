//  caculation the simple interest
#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter principal amount, rate of interest and time in years:\n");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest: %.2f\n", si);

    return 0;
}

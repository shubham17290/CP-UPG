//  program of volume of sphere
#include <stdio.h>
int main() {

    float r, volume;
    printf("Enter the radius : ");
    scanf("%f", &r);
    volume = (4.0 / 3.0) * 3.14 * r * r * r;
    printf("Volume of sphere is : %.2f\n", volume);
    return 0;
}

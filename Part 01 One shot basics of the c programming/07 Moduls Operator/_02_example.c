#include <stdio.h>

int main() {
    int a = 2; // a > b - will return the actual return value of remainder
    // a < b : in this case this will return the actual value of a
    int b = 3;
    int r = a % b;
    printf("Remainder is : %d", r);

    return 0;
}
 
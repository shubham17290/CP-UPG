//  Take positive integer input and tell if it divisible by 5 or 3 but not divisible by 15.
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0) {
        if (n % 15 != 0) {
            printf("The number is divisible by 5 or 3 but not divisible by 15\n");
        } else {
            printf("Number is divisible by 15 \n");
        }
    } else {
        printf("The number is  not divisible by 5 or 3 divisible \n");
    }
    return 0;
}

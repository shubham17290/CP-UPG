// take a side's of the trianlge as the input and check their fesibility is it right or wrong
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first side : ");
    scanf("%d", &a);
    printf("Enter Second side : ");
    scanf("%d", &b);
    printf("Enter Third side : ");
    scanf("%d", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        printf("Valid Triangle\n");
    } else {
        printf("InValid Triangle\n");
    }
    return 0;
}

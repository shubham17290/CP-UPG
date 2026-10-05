
//  WAP to count the digits of a given number.
#include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter value: ");
    scanf("%d", &n);

    while (n != 0) {
        n = n / 10;
        count++;
    }
    printf("Total digits: %d", count);

    return 0;
}

//  WAP to print out all armstrong numbers between 1 to n.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int temp = i, sum = 0, digit;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Take a positive integer input and tell if it is divisible by 5 or and 3 .

#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    //  Method 02 :
    if (n % 15 == 0) {
        printf("%d is divisible by both 5 and 3\n", n);
    } else {
        printf("%d is not divisible by both 5 and 3\n", n);
    }

    return 0;
}

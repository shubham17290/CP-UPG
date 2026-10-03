//  Print the odd numbers ap series
#include <stdio.h>

int main() {
    int n;
    printf("Enter your number: \n");
    scanf("%d", &n);
    printf("there you go : \n");
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

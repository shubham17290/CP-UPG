//  Print the table of the n  , and n will be provided by the user
#include <stdio.h>

int main() {
    int n;
    printf("Enter your number sir : \n");
    scanf("%d", &n);
    printf("Your table for number n is here\n");
    for (int i = 1; i <= 10; i++) {

        printf("%d\n", n * i);
    }

    return 0;
}

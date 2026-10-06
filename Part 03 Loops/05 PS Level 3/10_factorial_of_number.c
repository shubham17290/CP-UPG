//  WAP  to print the febonacci series of a given number.
#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    printf("Enter value: ");
    scanf("%d", &n);
    int a = 0 ;
    int b = 0 ;
    int sum = 0;

    for (int i = 1; i <= n-2; i++) {
        fact *= i;
        a = b;
        b = sum;
    }
    printf("%d\n" , sum);

    return 0;
}

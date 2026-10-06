//  WAP to print the first  " n " fibonacci numbers.
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("the fibonacci series is %d\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

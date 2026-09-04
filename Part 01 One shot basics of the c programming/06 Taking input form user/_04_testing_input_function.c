#include <stdio.h>

int main() {
    int x = 5;

    printf("%d\n", &x); // will print the address of x in memory
    scanf("%d", x);
    printf("The number you entered is : %d\n", x);
    return 0;
}

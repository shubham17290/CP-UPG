#include <stdio.h>
int add(int a, int b) { return a + b; }

int main() {
    int x, y, sum;

    printf("Enter value of x and y: ");
    scanf("%d %d", &x, &y);

    sum = add(x, y);
    printf("Thw sum value is : %d\n ", sum);

    return 0;
}

//  Display this AP- 4, 7 , 10 , 13, 16 .. upto 'n'
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 4; i <= 3 * n + 1; i++) {
        printf("%d\n", i);
    }

    return 0;
}

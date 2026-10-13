#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of row and column: ");
    scanf("%d %d", &m, &n);
    //     Alphabet Triangle using extra variable
    for (int i = 1; i <= m; i++) {
        int a = 1;
        for (int j = 1; j <= i; j++) {
            printf("%c", a + 64);
            a++;
        }
        printf("\n");
    }

    return 0;
}

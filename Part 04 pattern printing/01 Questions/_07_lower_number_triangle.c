#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of row and column: ");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++) {
        for (int j = i; j <= n; j = j + 2) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

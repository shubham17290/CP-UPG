#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 != 0) {
                // Odd row: number print karo
                printf("%d", j);
            } else {
                // Even row: alphabet print karo ('A' = 65 ASCII)
                printf("%c", 'A' + j - 1);
            }
        }
        printf("\n"); // Agli line ke liye
    }

    return 0;
}

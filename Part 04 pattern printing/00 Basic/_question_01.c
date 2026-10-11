#include <stdio.h>
int main() {

    int m, n;
    printf("Enter the number of row , and column : \n");
    scanf("%d %d", &m, &n);
    // Stars ko print krr raha hai ..
    for (int j = 1; j <= m; j++) {
        for (int i = 1; i <= n; i++) {
            printf("*");
        }
        printf("\n"); // har line ke baad new line print krr raha hai ..
    }

    return 0;
}

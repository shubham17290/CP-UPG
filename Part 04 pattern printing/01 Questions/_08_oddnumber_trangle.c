#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of row and column: ");
    scanf("%d %d", &m, &n);
//  Now in this code i am going to us the concept of the extra variables
    for (int i = 1; i <= m; i++) {
        int a = 1;
        for (int j = 1; j <= i; j ++) {
            printf("%d", a);
            a = a + 2;              
        }
        printf("\n");
    }

    return 0;
}

/* Alphabet Square



#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of row and column: ");
    scanf("%d %d", &m, &n);
    //     Alphabet Square
    for (int i = 1; i <= m; i++) {

        for (int j = 1; j <= n; j++) {
            printf("%c", j + 64);
        }
        printf("\n");
    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter value of row and column: ");
    scanf("%d %d", &m, &n);
    //     Alphabet Square using extra variable
    for (int i = 1; i <= m; i++) {
        int a = 1;
        for (int j = 1; j <= n; j++) {
            printf("%c", a + 64);
            a++;
        }
        printf("\n");
    }

    return 0;
}

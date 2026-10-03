//  way : 02 to print the variable value
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    // use of the extra variables

    int a = 4;
    for (int i = 1; i <= n; i++) {
        printf("%d\n", a);
        a = a + 3;
    }

    return 0;
}

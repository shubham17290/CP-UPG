// Print the sum of this series : 1-2-+3-4+5-6+7-8+9-10.....+n
#include <stdio.h>

int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);
    // 1-2+3-4+5-6+7-8+9-10.....+n
    //  go alone with
    //  even --> subtract
    //  odd --> add
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        } else {
            sum = sum - i;
        }
    }
    printf("the sum is : %d\n", sum);
    return 0;
}

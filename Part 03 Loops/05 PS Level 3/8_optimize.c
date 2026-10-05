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
    if (n % 2 == 0) {
        sum = -n / 2;
    } else {
        sum = (n + 1) / 2;
    }

    printf("the sum is : %d\n", sum);
    return 0;
}

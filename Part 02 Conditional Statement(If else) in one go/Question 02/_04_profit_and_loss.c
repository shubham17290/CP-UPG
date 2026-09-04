
#include <stdio.h>

int main() {

    int c, s;

    printf("Enter value of the cost prize and the selling proce: ");
    scanf("%d %d", &c, &s);
    if (s > c) {
        printf("Profit");
    } else if (s < c) {

        printf("Loss");
    } else {
        printf("No profit No loss");
    }

    return 0;
}

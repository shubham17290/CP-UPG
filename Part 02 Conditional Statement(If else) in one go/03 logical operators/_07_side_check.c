//  take 3 numbers input and tell if they can be the sides of a triangle
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the values of the side of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (a + c) > b) {
        printf("valid triangle");
    } else {
        printf("invalid triangle\n");
    }

    return 0;
}

//  print the largest among the 5 values of a, b, c, d, e using logical operators : using ternary
//  operator
#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter value: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int largest = (a > b && a > c && a > d && a > e)   ? a
                  : (b > a && b > c && b > d && b > e) ? b
                  : (c > a && c > b && c > d && c > e) ? c
                  : (d > a && d > b && d > c && d > e) ? d
                                                       : e;

    printf("The largest number is: %d\n", largest);

    return 0;
}

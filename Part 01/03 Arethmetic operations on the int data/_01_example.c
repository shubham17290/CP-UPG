#include <math.h>
#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;
    printf("Lets do the arithmetic operations on the int data\n");

    printf("Addition of x and y is : %d\n", x + y);           // 7
    printf("Subtraction of x and y is : %d\n", x - y);        // 3
    printf("Multiplication of the x and y is : %d\n", x * y); // 10
    printf("Division of x and y is : %d\n",
           x / y); // this is also , floor division , tells how many times y can fit into x    =  2
    printf("Remainder when you divide x by y : %d\n", x % y); // 1
    printf("print the exponent value of the x th the power y  %d\n", (int)lround(pow(x, y))); // 25  (5^2)
    return 0;
}

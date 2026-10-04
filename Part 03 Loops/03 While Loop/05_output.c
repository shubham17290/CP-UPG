#include <stdio.h>

int main() {
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("\n%d%d%d\n", x, y, z);
    //  x = 2, y = 3, z = 3

    return 0;
}

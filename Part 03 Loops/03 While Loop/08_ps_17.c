#include <stdio.h>

int main() {
    int i = 10;
    while (i = 10) {
        printf("\n%d", i);
        i = i + 1;
    }

    return 0;
}
//  will halt in infinite loop because i is always 10

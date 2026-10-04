#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        printf("\n%d", i); // extra line will be printed first
        i++;
    }

    return 0;
}

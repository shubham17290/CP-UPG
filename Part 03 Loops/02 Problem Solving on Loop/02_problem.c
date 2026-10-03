// print all even number from 1 to 100  uisng loop
#include <stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}

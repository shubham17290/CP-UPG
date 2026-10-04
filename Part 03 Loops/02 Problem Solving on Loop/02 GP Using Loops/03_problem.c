//  Display this ap - 100, 97 , 94, 91, 88 upto 'n' terms positive one only
#include <stdio.h>

int main() {

    int a = 100;
    for (int i = 1; i <= 34; i++) {
        printf("%d\n", a);
        a = a - 3;
    }

    return 0;
}

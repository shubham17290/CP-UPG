//  ASCII value print karo alphabets ka
#include <stdio.h>

int main() {
    int n;

    /* // Type casting int to char
    int a = 65; // ASCII value of 'A'
    int b = 66; // ASCII value of 'B'
    char ch = (char)a;
    char ch1 = (char)b;
    printf("char of 64 is %c and of 65 is %c\n", ch, ch1);*/
    for (int i = 65; i < 90; i++) {
        printf("ASCII value of %c is %d\n", (char)i, i);
    }

    return 0;
}

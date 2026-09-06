#include <stdio.h>
void greet() {
    printf("How Buddy , good morning !\n");
    printf("How are you ?\n");
}
int main() {
    int n;

    printf("Enter value: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        greet();
    }

    return 0;
}

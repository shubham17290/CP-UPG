#include <stdio.h>
void england() {
    printf("You are iin england\n");
    return;
}
void austrailia() {
    printf("You are in austrailia\n");
    england();
    return;
}
void india() {
    printf("You are in india\n");
    austrailia();
    return;
}
int main() {
    india(); // calling the function india

    return 0;
}

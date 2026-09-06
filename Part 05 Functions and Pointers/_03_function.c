#include <stdio.h>
void england() {
    printf("You are in England\n");
    return;
}
void austrailia() {
    printf("You are in Austrailia\n");
    england();
    return;
}
void india() {
    printf("You are in India\n");
    austrailia();
    return;
}
int main() {
    india(); // calling the function india

    return 0;
}

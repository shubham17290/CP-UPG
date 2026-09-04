//  percentage of 5 subjects marks
#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    printf("Enter marks for 5 subjects:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Total marks: %.2f\n", total);
    percentage = (total / 500.0) * 100.0;

    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

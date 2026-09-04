//  Given the length and breadth of a rectangle, write a program to find the area and perimeter of
//  the rectangle. and main question area > p  , area < parimeter
#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    if (area > perimeter) {
        printf("Area is greater than perimeter.\n");
    } else if (area < perimeter) {
        printf("Area is less than perimeter.\n");
    } else {
        printf("Area is equal to perimeter.\n");
    }

    return 0;
}

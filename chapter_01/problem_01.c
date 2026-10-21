// Write a C program to calculate the area of a rectangle:
//  Using inputs supplied by the user.

#include <stdio.h>

int main()
{
    int height, width;
    printf("Enter Height : ");
    scanf("%d", &height);
    printf("Enter Width : ");
    scanf("%d", &width);
    printf("The area of a rectangle is : %d", height * width);
    return 0;
}

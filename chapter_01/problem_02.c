// Calculate the area of a circle and modify the same program to calculate the volume of
// a cylinder given its radius and height.

#include <stdio.h>

int main()
{
    float pi = 3.1416;
    int r, h;
    printf("Enter radious of the Cylinder : ");
    scanf("%d", &r);
    printf("Enter height of the Cylinder : ");
    scanf("%d", &h);
    float area = pi * r * r;
    float volume = area * h;
    printf("Volume of a Cylinder is : %f", volume);
    return 0;
}
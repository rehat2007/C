// 3. Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.

#include <stdio.h>

int main()
{
    int c;
    printf("Enter celsius temperature : ");
    scanf("%d", &c);
    float f = (9.0 / 5.0) * c + 32;
    printf(" Fahrenheit temperature : %2f", f);
    return 0;
}
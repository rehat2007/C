// Write a program to calculate simple interest for a set of values representing principal,
// number of years, and rate of interest

#include <stdio.h>

int main()
{
    int p, y, i;
    printf("Enter Principal : ");
    scanf("%d", &p);
    printf("Number of Years : ");
    scanf("%d", &y);
    printf("Enter Rate of Interest : ");
    scanf("%d", &i);
    int si = (p * y * i) / 100;
    printf("Simple Interest : %d", si);
    return 0;
}
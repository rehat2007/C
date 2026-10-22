// Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main() {
    int n ;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n%97 != 0){
        printf("Number is not divisible by 97");
    }
    return 0;
}
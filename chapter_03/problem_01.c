// What will be the output of this program?
// int a = 10;
// if (a = 11)
// printf("I am 11");
// else
// printf("I am not 11");

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}

// It will print "I am 11" because a = 11 assigns the value 11 to a. The assignment expression evaluates to 11, and every non-zero integer value is considered true in a C condition.
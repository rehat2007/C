// Which of the following is invalid in C?
// a. int a = 1 int b = a
// b. int v = 3 * 3
// c. char | t =^ prime 21| dec 2020';

#include <stdio.h>

int main() {
    // Valid
    int a = 1; int b = a;
    printf("%d",b);
    
    // Valid
    // int v = 3 * 3;
    // printf("%d",v);
    
    //Invalid
    // char | t =^ prime 21| dec 2020';

    return 0;
}
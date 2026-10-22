// Explain step by step evaluation of 3*x/y-z+k, where x = 2 , y = 3 , z = 3 , k = 1 .

#include <stdio.h>

int main() {
    int x=2,y=3,z=3,k=1;
    int result = 3*x/y-z+k;
    printf("Result is : %d",result);
    return 0;
}

// step by step evaluation
//step1 : 3*x
//step2 : (3*x)/y
//step3 : (3*x/y)-z
//step4 : (3*x/y-z)+k
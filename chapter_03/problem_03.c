// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
// Income Slab Tax
// 2.5 - 5.0L 5%
// 5.0L - 10.0L 20%
// Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.


#include <stdio.h>

int main() {
    float income;
    float tax;

    printf("Enter your annual income in lakhs: ");
    scanf("%f", &income);

    if (income <= 2.5) {
        tax = 0;
    }
    else if (income <= 5.0) {
        tax = 0.05 * income * 100000;
    }
    else if (income <= 10.0) {
        tax = 0.20 * income * 100000;
    }
    else {
        tax = 0.30 * income * 100000;
    }

    printf("You have to pay %.2f TK\n", tax);

    return 0;
}

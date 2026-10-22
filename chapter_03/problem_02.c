// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there are
// three subjects and take the marks as input from the user.

#include <stdio.h>

int main()
{
    int physics, chemistry, biology;
    printf("Enter Physics Marks : ");
    scanf("%d", &physics);
    printf("Enter Chemistry  Marks : ");
    scanf("%d", &chemistry);
    printf("Enter Biology Marks : ");
    scanf("%d", &biology);
    int total = physics + chemistry + biology;
    if (total >= 120 && physics >= 33 && chemistry >= 33 && biology >= 33)
    {
        printf("Student pass");
    }
    else
    {
        printf("Student fail");
    }

    return 0;
}
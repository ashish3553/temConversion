
// This is a program to determine that what is your status in your physics chemistry and math exam

#include <stdio.h>

int main()
{
    int physics, chemistry, maths;

    float total;
    printf("enter physics mark\n");
    scanf("%d", &physics);

    printf("enter cheistry mark\n");
    scanf("%d", &chemistry);

    printf("enter maths mark\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;
    if (total < 40 || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is:\n %f,\n you are fail  ", total);
    }
    else
    {
        printf("your total percentage is:\n %f, and you are passed ", total);
    }
    return 0;
}
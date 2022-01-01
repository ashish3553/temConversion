#include <stdio.h>

int main()
{
    // this is the program to find greatest number out of four entered number
    float a, b, c, d;
    printf("enter the first number\n");
    scanf("%f", &a);

    printf("enter the second number\n");
    scanf("%f",&b);

    printf("enter the third number\n");
    scanf("%f", &c);

    printf("enter the fourth number\n");
    scanf("%f",&d);

    if (a > b && a > c && a > d)
    {
        printf("greatest number is %f", a);
    }

    if (b > a && b > c && b > d)
    {
        printf("greatest number is %f", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("greatest number is %f", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("greatest number is %f", d);
    }

    return 0;
}
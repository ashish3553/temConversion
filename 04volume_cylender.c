#include <stdio.h>

int main()
{
    int r, h;
    float pi = 3.14;
    printf("give the value of radious\n");
    scanf("%d", &r);
    printf("what is the hight of your cylender\n");
    scanf("%d", &h);
    printf("volume of your cylender is \n=%f", pi * h * r * r);
    return 0;
}
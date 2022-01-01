#include <stdio.h>

int main(){
    float pri;//principle amount
    float rate;//rate of interest
    float year;//for how many year's you want to calculate interest
    printf("what is your principle amount\n");
    scanf("%f",&pri);
     printf("what is your rate of intrest\n");
     scanf("%f",&rate); 
     printf("for how many years\n");
     scanf("%f",&year);
      printf(" your interest is \n=%f",(pri*rate*year)/100);
    return 0;
}
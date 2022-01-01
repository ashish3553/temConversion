#include <stdio.h>

int main(){
    //this is a program to calculate tempreture in degree forenhight from celcious
    float celcious,forenhight;
    printf("enter the value of tempreture in celcious");
    scanf("%f",&celcious);
    forenhight=(celcious*9/5)+32;
    printf("value in forenhight \n=%f",forenhight);
    return 0;
}
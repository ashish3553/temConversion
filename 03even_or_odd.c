#include <stdio.h>

int main(){
    int a; 
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    //this is one liner if-else statement!!
    (a%2==0) ? printf("a is a even number") : printf("a is a odd number");
    return 0;
}
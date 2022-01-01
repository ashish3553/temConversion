#include <stdio.h>

int main(){
     long int r,sum=0,n;
    printf("Enter the number to add digits of that number\n");
    scanf("%d",&n);
    while(n>0){

       r= n%10;
       sum=sum+r;
       n=n/10;
    }
    printf("sum of the digit of  given number is =>> %d",sum);
    return 0;
}
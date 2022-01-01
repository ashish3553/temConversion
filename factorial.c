
//BOTH PROGRAMS ARE MADE TO CALCULATE FACTORIAL:
// #include <stdio.h>
// #include <limits.h>
// //this is a program to calculate factorial of a number:
// int main(){
//    int n,i,fact=1;
    
//     printf("Enetr the number to calculate factorial\n");
//     scanf("%d",&n);
//     for(i=1; i<=n;i++){
//         fact=fact*i;

//     }
//     printf("Factorial of %d is =>>  %d ",n,fact);

//     return 0;
// }
#include <stdio.h>

int main(){
    int i,n,fact=1;
    printf("Enter the number to calculate factorial");
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        fact=fact*i;
    }
    printf("Factorial of %d is =>> %d",n,fact);
    return 0;

}
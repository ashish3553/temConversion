#include <stdio.h>

int main(){
    int n,i,j,k,c=160;
    printf("For how many rows you want to print star triangle\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)//i is used to print number of rows:
    {
      for(j=1; j<=c/2-i; j++){
          printf("%d",j);
      }
      for(k=1; k<=2*i-1; k++)//k is used to print stars:
    {

        printf("*");
    }
    printf("\n");
    }
    return 0;
}
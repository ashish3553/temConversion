// #include <stdio.h>

// int main(){
//     int i,j;
//     for(i=5; i>=1 ;i--){
//         for(j=i; j>=1; j--){
//             printf("%d",j);
//         }
//         printf("\n");


//     }
//     return 0;
// }
/*>>  - - - - *
      - - - * *
      - - * * *
      - * * * *
      * * * * * >> */     
#include <stdio.h>

int main(){
    int i,j,k;
    for(i=1; i<=5; i++){
        for(j=i; j<5; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf(" *");
        }
        printf("\n");


    }

    return 0;
}
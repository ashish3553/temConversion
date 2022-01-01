#include <stdio.h>
//This is a program to calculate your grade
int main(){
    int mark;
    printf("Enter your marks out of 100\n");
    scanf("%d",&mark);
    if(mark>90 && mark<=100){
        printf("Your grade is A");}

        if(mark>80 && mark<=90){
        printf("Your grade is B");}

        if(mark>70 && mark<=80){
        printf("Your grade is C");}

        if(mark>=60 && mark<=70){
        printf("Your grade is D");}

        if( mark<60){
        printf("SORRY !!! Your are fail ");}
    
    return 0;
}
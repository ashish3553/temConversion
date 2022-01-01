#include <stdio.h>

int main(){
    //This is a program to confermation of lower case
    //97-122=a to z and 65 to 90 =A TO Z--->ASCII VALUES
    char ch;
    printf("Enter your character\n\n");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){

        printf("This is a lowercase");
    }
    else if(ch>=65 && ch<=90){
        printf("This is  a upper case");
    }
    else {
        printf("this is niether lower nor uppercase");
    }
    return 0;
}
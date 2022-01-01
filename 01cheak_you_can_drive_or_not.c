#include <stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age<=90 && age>18){
        printf("you are above 18 and below 90 ,\n\n so you can drive");
    }
    
    
 else if(age==18){
      printf(" plese  go and apply for your driving licience , \n\nonly then you can drive");

  }

  else if(age<18 && age>=10){
      printf ("ja jake padhai ker , driving nhi kerni tereko!! ");
  }
 else if(age<10 && age>0){
      printf("abcd sikh abhi tu , abhi se drive sikhker mars pe jayega kya ");
  }
  else{
      printf("you can't drive");
  }
  
    return 0;
}       
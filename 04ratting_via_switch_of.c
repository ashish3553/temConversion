#include <stdio.h>

int main(){
    int ratting;
    printf("enter your rating(1-5)\n");
    scanf("%d", &ratting);
    switch(ratting) {
        case 1:
        printf("sorry for your bad exeperience sir!!\n");
        break;
        case 2: 
        printf("we asure you to provide better services in future\n");
        break;
        case 3:
        printf("thanks for your valuable feedback, it will hwlp us to improve\n");
        break;
        case 4:
        printf("thanks for your love and support\ngod bless you sir\n");
        break;
        case 5:
        printf("Thanks from the bottom of heart\n\n   it would be great for us if we again serve you\n");
        break;

        default:
        printf("invalid ratting\n");
        break;
    }
    return 0;
}
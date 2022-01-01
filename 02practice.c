#include <stdio.h>
#include <limits.h>
// this is a program to print ascii value
int main()
{
    printf("signed short min value:%d\n", SHRT_MIN);
    printf("signed short MAX value:%d\n", SHRT_MAX);
    printf(" UNsigned short mAX value:%u\n", USHRT_MAX);
    printf("signed integer min value:%d\n", INT_MIN);
    printf("signed INTEGER MAX value:%d\n", INT_MAX);
    printf("UNsigned INTEGER min value:%u\n", UINT_MAX);
    printf("signed LONG min value:%d\n", LONG_MIN);
    printf("signed LONG MAX value:%d\n", LONG_MAX);
    printf("UNsigned LONG MAX value:%u\n", ULONG_MAX);
    printf("signed character min value:%c\n", CHAR_MIN);
    printf("signed char max value:%c\n", CHAR_MAX);
    printf("unsigned char max value:%c\n", UCHAR_MAX);

    return 0;
}
// #include <stdio.h>

// // int main(){
// //     int x=10,y;
// //     y=++x;
// //     printf("%d  ,  %d",x,y);
// //     return 0;
// // }


// // #include <stdio.h>
// // int main(){
// //     int x=10,y;
// //     y=x++;
// //     printf("%d  ,  %d",x,y);
// //     return 0;
// // }
// //#include <stdio.h>

// // int main(){
// //     int a=2,b=3;
// //     printf("\n%d,%d\n",a,b);
// //     b=a++  +  b--;
// //      printf("\n%d,%d\n",a,b);
// //     a= a--  +  ++b;
// //      printf("\n%d,%d\n",a,b);
// //     b=++a  +  --b;
// //     printf("\n%d,%d\n",a,b);
// //     return 0;
// // }
// // #include <stdio.h>

// // int main(){
// //     int x=10,y=20,z;
// //     z=x++  *  --y;
// //     printf("%d,%d,%d",x,y,z);
// //     return 0;
// // }
// #include <stdio.h>

// int main(){
//     short int i=1;
//     while(i){
//         printf("i:=>>  %d\t | ",i);
//         i++;
//     }

//     return 0;
// }
// #include <stdio.h>

// int main(){
//     signed char ch=120;
//     while(++ch){
//         printf("|| %d\t || ",ch);
//     }
//     return 0;

// 
// #include <stdio.h>

// int main(){
//     int v1,v2,sum;
//     v1=123;
//     v2=234; 
//     sum=v1+v2;
//     printf("the sum of %i and %i is %i",v1,v2,sum);
//     return 0;
// }
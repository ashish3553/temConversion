
/*this is a program to calculate your tax
tax slab-->0 to 2.5lak, no tax

    2.5lak to 5.0 lak->10 percent
    5.0lak to 10lak -->20 %
    abobe 10lak->30%

 */

#include <stdio.h>

int main(){
    int income;
    float tax;
    printf("what is your income\n");
    scanf("%d",&income);
    if(income<250000){
        printf("You are not required to pay any tax\n");}

        else if(income>250000 && income<=500000)//you have to pay 10% tax to the goverment
        {
            tax=income/10;
            printf("Your payable tax is %f",tax);

        }
        else if(income>500000 && income<=1000000)// YOU HAVE TO PAY 20 % TAX
        {
            tax=(income-500000)/5+25000;
            printf("your payable tax is :%f",tax);
        }
        else if (income>1000000)//you have to pay 30% tax
        {
                tax=((income-1000000)*3)/10+(500000/5)+25000;
                printf("your payable tax is %f",tax);

        }
    
    return 0;
}
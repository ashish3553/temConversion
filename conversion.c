#include <stdio.h>
 int main(){
 /* this is a program for unit conversion*/

 float km,m,cm,ft,inch;

 printf("plese enter the distance in km");

 scanf ("%f", &km);

 m=km/100;

 cm=m/100;

 inch=cm/2.14;

 ft=inch/12;
 printf("distance in meter=%f\n\n",m  );
  printf("\n\ndistance  in cm =%f\n\n",cm);
 printf("distance in inch =%f\n\n" ,inch);






 }

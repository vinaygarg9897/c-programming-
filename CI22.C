#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float  p,t,r,ci;
 clrscr();
printf("Enter pricipal rate time \n");
scanf("%f %f %f",&p,&r,&t);
r=r/100;
ci=p*pow((1+(r/12)),12*t);
printf("\n %f",ci);
getch();
}



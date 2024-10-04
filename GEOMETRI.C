#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,r,ch,ar;
clrscr();
printf("==Select Option===");
printf("\n 1. Area of rectangle");
printf("\n 2. Area of Triangle");
printf("\n 3. Area of Circle");
printf("\n Enter Choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
       printf("Enter length and Breadth");
       scanf("%d%d",&a,&b);
       ar=a*b;
       printf("Area is =%d",ar);
       break;
case 2:
       printf("Enter base and Height");
       scanf("%d%d",&a,&b);
       ar= (0.5)*(a*b);
       printf("Area is =%d",ar);
       break;
case 3:
       printf("Enter sides");
       scanf("%d",&a);
       ar=3.14*a*a;
       printf("Area is =%d",ar);
       break;

default:
	  printf("Wrong choice");
 }







getch();
}
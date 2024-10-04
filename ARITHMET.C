#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter two no");
scanf("%d%d",&a,&b);
printf("Enter choice");
scanf("%d",&c);
switch(c)
{
case 1:
       printf("Addition two no =%d ",a+b);
       break;
case 2:
       printf(" Subtraction two no =%d ",a-b);
	break;
case 3:
       printf("Multiplication two no =%d",a*b);
	break;
case 4:
       printf("Division two no =%d",a/b);
	break;
default:
	  printf("Wrong Choice");
}
getch();
}






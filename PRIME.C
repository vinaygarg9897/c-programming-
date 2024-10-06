#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("\n enter the number");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
printf("\n the number is not prime");
getch();
return;
}
}
printf("\n the number is prime");
getch();
}
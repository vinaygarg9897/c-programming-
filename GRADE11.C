#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
printf("Enter marks");
scanf("%d",&m);
switch(m/10)
{
case 9:
	printf("Grade A");
	break;
case 8:
	printf("Grade B");
	break;
case 7:
	printf("Grade C");
	break;
case 6:
	printf("Grade D");
	break;

default:
	  printf("Fail");
}
getch();
}
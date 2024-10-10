#include<stdio.h>
#include<conio.h>
void main()
{
char g;
clrscr();
printf("enter Grade");
scanf("%c",&g);
if(g=='E')
printf("Excellent");
else if(g=='V')
printf("Very Good");
else if(g=='G')
printf("Good");
else if(g=='A')
printf("Avg");
else
printf("Fail");
getch();
}
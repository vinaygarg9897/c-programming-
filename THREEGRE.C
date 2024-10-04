#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three no");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf(" a is greatest");
}
else if(b>c)
{
printf("b is greatest:");
}
else if(a==b && b==c)
{
printf("All no are equal");
}
else
printf(" c is greatest");

getch();
}

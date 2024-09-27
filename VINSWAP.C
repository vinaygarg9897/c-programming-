#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two no");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n swap value of a=%d",a);
printf("\n swap value of b=%d",b);
getch();
}




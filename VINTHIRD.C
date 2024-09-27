#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("enter two no");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nswap value of a=%d",a);
printf("\nswap value of b=%d",b);
getch();
}

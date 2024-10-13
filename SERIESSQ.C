#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum;
clrscr();
printf("enter n values");
scanf("%d",&n);
sum=1;
printf("%d^2",sum);
for(i=2;i<=n;i++)
{
printf("+%d^2",i);
sum=sum+i*i;
}
printf("=%d",sum);
getch();
}
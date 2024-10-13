#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum;
clrscr();
printf("enter n values");
scanf("%d",&n);
sum=1;
printf("%d",sum);
for(i=2;i<=n;i++)
{
printf("+%d",i);
sum=sum+i;
}
printf("=%d",sum);
getch();
}
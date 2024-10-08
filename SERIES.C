#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=0,sum=0;
clrscr();
printf("enter no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a*10+9;
sum=a+sum;
printf("%d+",a);
}
printf("\nsum is= %d",sum);
getch();
}









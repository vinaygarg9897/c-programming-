#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("enter no");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
sum=sum+i;
printf("\n%d",i);
}
}
printf("\nsum=%d",sum);
getch();
}










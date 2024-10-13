#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,n=1;
clrscr();
printf("enter row");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",n);
n++;

}
printf("\n");
}
getch();
}
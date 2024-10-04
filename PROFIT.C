#include<stdio.h>
#include<conio.h>
void main()
{
int sp,cp,l,p;
clrscr();
printf("Enter selling and cost price");
scanf("%d%d",&sp,&cp);
if(sp>cp)
{
p=sp-cp;
printf(" profit is=%d",p);
}
else if(sp==cp)
{
printf("No profit and loss");
}
else
{
   l=cp-sp;
   printf("loss is =%d",l);
   }
getch();
}
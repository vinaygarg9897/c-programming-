#include<stdio.h>
#include<conio.h>
void main()
{
int temp;
clrscr();
printf("enter temp");
scanf("%d",&temp);
if(temp<0)
printf("Freezing Weather");
else if(temp>=0 && temp<10)
printf("Very Cold");
else if(temp>=10 && temp<20)
printf("Cold");
else if(temp>=20 && temp<30)
printf("Normal");
else if(temp>=30 && temp<40)
printf("Hot");
else
printf("Very Hot");
getch();
}
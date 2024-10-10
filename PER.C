#include<stdio.h>
#include<conio.h>
void main()
{
float m1,m2,m3,m4,m5,per,sum;
clrscr();
printf("enter marks in english");
scanf("%f",m1);
printf("enter marks in hindi");
scanf("%f",m2);
printf("enter marks in math");
scanf("%f",m3);
printf("enter marks in science");
scanf("%f",m4);
printf("enter marks in sst");
scanf("%f",m5);
sum=m1+m2+m3+m4+m5;
per=sum*100/500;
printf("\n percentage of student=%f",per);
getch();
}

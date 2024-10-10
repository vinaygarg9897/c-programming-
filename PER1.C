#include<stdio.h>
#include<conio.h>
void main()
{
char name[5];
float m1,m2,m3,m4,m5,per,sum;
clrscr();
printf("Enter your name");
scanf("%s",name);
printf("enter marks in english and Hindi and math and sci and sst");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
per=sum*100/500;
printf("\n sum is =%f",sum);
printf("\n percentage of student=%f",per);
getch();
}

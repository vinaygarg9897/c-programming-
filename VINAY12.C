#include<stdio.h>
#include<conio.h>
void main()
{
int a1,b1,c,ch;
clrscr();
printf("1.Additon \n");
printf("2.Subtraction \n");
printf("3.Multiplication \n");
printf("4.Division \n");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1: {
       printf("enter two no");
       scanf("%d%d",&a1,&b1);
       c=a1+b1;
       printf(" Addition two no is=%d",c);
       break;
       }
case 2 : {
       printf("enter two no");
       scanf("%d%d",&a1,&b1);
       c=a1-b1;
       printf("Subtraction two no is=%d",c);
       break;
       }

case 3: {
       printf("enter two no");
       scanf("%d%d",&a1,&b1);
       c=a1*b1;
       printf("Mutiplication two no is=%d",c);
       break;
       }
case 4: {
       printf("enter two no");
       scanf("%d%d",&a1,&b1);
       c=a1/b1;
       printf("division two no is=%d",c);
       break;
       }
default:
	  printf("wrong choice");


}
getch();
}


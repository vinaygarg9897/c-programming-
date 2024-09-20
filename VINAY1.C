#include<stdio.h>
#include<conio.h>
void main()
{
int a,l,b,area;
float b1,h,ar;
float r;
clrscr();
printf("Enter side");
scanf("%d",&a);
printf("Area of square is %d",a*a);
printf("\nenter length and breadth");
scanf("%d%d",&l,&b);
area=2*(l+b);
printf("Perimeter of rectangle is %d",area );
printf("\nenter side");
scanf("%f",&r);
printf("perimeter of circle is %f",2*3.14*r);
printf("enter base and height");
scanf("%f%f",&b1,&h);
ar=(0.5*(b1*h));
printf("area of triangle is %f",ar);
getch();
}


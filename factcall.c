
#include<stdio.h>
#include<conio.h>
void fact (int);
int main()
{
	int n;
	printf("enter the value to print factorial:");
	scanf("%d",&n);
	fact(n);
	return 0;
	
}
      void fact(int n)
      {
      	int i,fact=1;
      	for(i=1;i<=5;i++)
      	{
      		fact=fact*i;
		  }
	  printf("the factorial of number is: %d",fact);
}


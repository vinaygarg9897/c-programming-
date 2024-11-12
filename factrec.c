#include<stdio.h>
int fact(int);
int main()
{

int a,c;

printf("enter the no");
scanf("%d",&a);

c=fact(a);
printf("%d",c);
}
int fact(int a)
{
	if(a==0)
	{
		return 0;
		
	}
	else if(a==1){
		return 1;
		
	}
	else{
		return a*fact(a-1);
	}
	}


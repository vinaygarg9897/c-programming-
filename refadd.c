#include<stdio.h>
#include<conio.h>
void add(int*,int*);

int main()
{
	int a,b;
	printf("enter two no");
	scanf("%d%d",&a,&b);
	add(&a,&b);
	
	return 0;
}
	
	void add(int *a,int *b)
	{
		int c;
		c=*a+*b;
	printf("sum is =%d",c);
	}
	


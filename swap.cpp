#include<stdio.h>
#include<conio.h>
void swap(int*,int*);

int main()
{
	int a,b;
	printf("enter two no");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	return 0;
}
	
	void swap(int *a,int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
		printf("After swapping a=%d",a);
		printf("After swapping b=%d",b);
	}
	


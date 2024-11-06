#include<stdio.h>
#include<conio.h>
void swap(int,int);

int main()
{
	int a,b;
	printf("enter two no");
	scanf("%d%d",&a,&b);
	swap(a,b);
	
	return 0;
}
	
	void swap(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
		printf("\n swapping a=%d",a);
		printf("\n swapping b=%d",b);
	}
	


#include<stdio.h>
int table(int,int);
int main()
{
	int n;
	printf("enter the no");
	scanf("%d",&n);
	
	table(n,1);
	 return 0;
	 

}

int table(int n ,int i)
{
	if(i>10)
	
       return 1;
   
   printf("\n%d*%d=%d",n,i,n*i);

   
   return table(n,i+1);
	}





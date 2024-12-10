#include<stdio.h>

	struct Employee{
		char name[50];
		int ID;
		int salary;
		char comp[50];
		int  year;
	}E[10];
	int main()
	{
		int n,i;
		printf("Enter the no of employee");
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("\nEnter detail of %d",i+1);
			printf("\nEnter the name");
			scanf("%s",E[i].name);
			printf("\nEnter the ID");
			scanf("%d",&E[i].ID);
			printf("\nEnter the Salary");
			scanf("%d",&E[i].salary);
			printf("\nEnter Company");
			scanf("%s",E[i].comp);
			printf("Enter the year");
			scanf("%d",&E[i].year);
	}
		printf("Employee Details");
		for(i=0;i<n;i++)
		{
			if(E[i].year>5)
			{
				int b=(E[i].salary)*0.01;
				int s=E[i].salary+b;			
			printf("\nNAME:%s",E[i].name);
			printf("\nSalary With Bonus:%d",s);
			printf("\nID:%d",E[i].ID);
			printf(" \nCOMPANY:%s",E[i].comp);
			printf("\nYEAR:%d",E[i].year);			
			
			
			
			
			
			
			
			
			
			
			
		}
	}
}

#include<stdio.h>
struct Employee {
	char name[10];
	int  ID;
	int  salary;
	char Dep[10];
}E[10];
int main(){
	int n,i;
	printf("Enter the no of Student ");
	scanf("%d",&n);
	printf(" \n===Information Details===\n");
	for(i=0;i<n;i++){
		printf("\nDetails=%d",i+1);

	printf("\nEnter the name");
	scanf("%s",E[i].name);
	printf("\nEnter the ID");
	scanf("%d",&E[i].ID);
	printf("\nEnter the Salary");
	scanf("%d",&E[i].salary);
	printf("Enter the Department");
	scanf("%s",&E[i].Dep);
}
    printf("===Details===");

    for(i=0;i<n;i++){
	
    printf("\nNAME:%s",E[i].name);
    printf("\nID:%d",E[i].ID);
    printf("\nSALARY:%d",E[i].salary);
	printf("\nDEPARTMENT:%s",E[i].Dep);
}
    return 0;
}

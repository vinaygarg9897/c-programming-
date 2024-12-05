#include<stdio.h>
struct student {
	char name[10];
	int  rollno;
	int  age;
}s[10];
int main(){
	int n,i;
	printf("Enter the no of Student ");
	scanf("%d",&n);
	printf(" \n===Information Details===\n");
	for(i=0;i<n;i++){
		printf("\nDetails=%d",i+1);

	printf("\nEnter the name");
	scanf("%s",s[i].name);
	printf("\nEnter the rollno");
	scanf("%d",&s[i].rollno);
	printf("\nEnter the age");
	scanf("%d",&s[i].age);
}
    printf("===Details===");

    for(i=0;i<n;i++){
	
    printf("\nNAME:%s",s[i].name);
    printf("\nROLLNO:%d",s[i].rollno);
    printf("\nAGE:%d",s[i].age);
}
    return 0;
}

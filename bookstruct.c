#include<stdio.h>
struct Book {
	char name[10];
	char author[10];
	int  price;
	int stock;
}B[10];
int main(){
	int n,i;
	printf("Enter the no of Student ");
	scanf("%d",&n);
	printf(" \n===Information Details===\n");
	for(i=0;i<n;i++){
		printf("\nDetails=%d",i+1);

	printf("\nEnter the name");
	scanf("%s",B[i].name);
	printf("\nEnter the Author");
	scanf("%s",&B[i].author);
	printf("\nEnter the Price");
	scanf("%d",&B[i].price);
	printf("Enter the Stock");
	scanf("%s",&B[i].stock);
}
    printf("===Details===");

    for(i=0;i<n;i++){
	
    printf("\nNAME:%s",B[i].name);
    printf("\nAUTHOR:%d",B[i].author);
    printf("\nPRICE:%d",B[i].price);
	printf("\nSTOCK:%s",B[i].stock);
}
    return 0;
}

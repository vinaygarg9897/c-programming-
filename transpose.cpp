#include<stdio.h>
int main(){
	
	int arr[3][3],i,j;
	printf("Enter the element matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	   printf("\nTranspose of Matrix\n");
	   for(i=0;i<3;i++)
	   {
	   	for(j=0;j<3;j++){
	   		
	   		printf(" %d",arr[j][i]);
	   	}
	   	 printf("\n");
		   }
		   
	     return 0;
	   }

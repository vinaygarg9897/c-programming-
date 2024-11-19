#include<stdio.h>
int main()
{
	int arr[3][3],brr[3][3],crr[3][3],i,j;

   printf("\nEnter the first matrix element");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&arr[i][j]);
 }
} 
    printf("\nEnter the second matrix element");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&brr[i][j]);
	}
}
    printf("\nAddition two matrix\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++){
    		
    crr[i][j]=arr[i][j]+brr[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",crr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

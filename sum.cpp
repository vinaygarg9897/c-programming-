#include<stdio.h>
int main(){
	int arr[3][3],sum=0,i,j;

    printf("Enter the element in matrix");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&arr[i][j]);
		}
	
 }
     for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    
	sum= sum+arr[i][j];

}
}

	printf(" Sum is =%d",sum);
	return 0;
}

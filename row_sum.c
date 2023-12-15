#include<stdio.h>
int main()
{
	
	int r,c,i,j,sum=0;
	
	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
		
		printf("sum of row = %d ",sum);
		printf("\n");
	}

}
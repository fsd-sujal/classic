#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("Size of Row : ");
	scanf("%d",&r);
	
	printf("Size of Column : ");
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
		int sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[j][i];
		}
		printf("Sum of column = %d",sum);
		printf("\n");
	}
}
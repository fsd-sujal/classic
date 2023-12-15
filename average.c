#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Size of Row = ");
	scanf("%d",&r);
	
	printf("Enter Size of Column = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	int i,j,sum=0,ave;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d,%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("A = %d,%d\n",a[i][j]);
		sum = sum+a[i][j];
		}
	}
	
	printf("Sum of All Array elements = %d\n",sum);
	ave=sum/a[i][j];
	printf("Average of Array = %d\n",ave);
}
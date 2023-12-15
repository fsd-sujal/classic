#include<stdio.h>
 
main()
{
	int r,c;
	printf("Enter Size of Row = ");
	scanf("%d",&r);
	
	printf("Enter Size of Column = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
	
//2700
} 
#include<stdio.h>

main()
{
	int i,j,r,c,sum=0;
	
	printf("Size of Row = ");
	scanf("%d",&r);
	
	printf("Size of Column = ");
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
		for(j=0;j<c;j++)
		{
			if(i+j==2)	 
			{
				sum=sum+a[i][j];				
			}
		}
	}
	printf("anti-daigonal sum = %d ",sum);
}
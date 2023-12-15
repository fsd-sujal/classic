#include<stdio.h>

main()
{
	int i,j,r,c,sum=0,sum1=0;
	
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
			if(i==j)
			{
				sum=sum+a[i][j];
			}
			
			if(i+j==2)	 
			{
				sum1=sum1+a[i][j];				
			}
		}
	}
	
	int sum3=sum+sum1;
	
	printf("\n");
	
	printf("daigonal sum = %d \n",sum);
	printf("anti-daigonal sum = %d \n",sum1);
	printf("cross-daigonal sum = %d ",sum3);
	
}
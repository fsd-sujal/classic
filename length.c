#include<stdio.h>

main()
{
	
	int r,c;
	
	printf("Enter of Row = ");
	scanf("%d",&r);
	
	printf("Enter of Column = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	int i,len;
	
	len = sizeof(a)/sizeof(0);
	printf("Length of Array = %d\n",len);
	
	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
}
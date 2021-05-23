#include<stdio.h>
int main()
{
	int mat[3][3];
	int i, j;
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", mat[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+mat[i][j];
			}
		}
	}
	printf("the sum of diagonal elements=%d\n",sum);
}

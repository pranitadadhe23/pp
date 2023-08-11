/*
*
**
***
****
*/
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter no. of row\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

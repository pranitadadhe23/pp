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
		for(j=0;j<i;j++)
		{
			printf("%c",'a'+j);
		}
		printf("\n");
	}
}

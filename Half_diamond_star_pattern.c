#include<stdio.h>
int main()
{
	int a,i,j;
	scanf("%d",&a);
	if(a<3)
	printf("The pattern is not possible");
	else
	{
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("
");
	}
	for(i=a-1;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		printf("*");
		printf("
");
	}
	}
	return 0;
}
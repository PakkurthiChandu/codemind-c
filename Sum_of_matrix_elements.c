#include<stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d%d",&a,&b);
	int c[a][b],i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			s+=c[i][j];
		}
	}
			printf("%d
",s);

	
	
}
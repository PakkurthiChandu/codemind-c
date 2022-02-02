#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int c[a][b],i,j,max=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
		for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			if(c[j][i]>max)
			{
				max=c[j][i];
			}
			
		}
		printf("%d
",max);
		max=0;
		
	}
}
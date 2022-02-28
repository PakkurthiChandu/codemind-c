#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a][a],i,j,s=0,d=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		s+=b[i][i];
		
	}
	//printf("%d",s);
	j=0;
	for(i=a-1;i>=0;i--)
	{
		d+=b[i][j];
		j++;
	}
	printf("Principal Diagonal:%d
Secondary Diagonal:%d",s,d);
}
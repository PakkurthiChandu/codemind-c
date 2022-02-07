#include<stdio.h>
int main()
{
	int a,i,j,c=0,k=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{  c=0;
		if(a%i==0)
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c+=1;
				}
			}
			if(c!=2)
			{
				k+=1;
			}
		}
	}
	printf("%d",k);
}
#include<stdio.h>
int last(int a)
{
	int b;
	b=a%10;
	if(b==2||b==3|b==9)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],c[a],i,j,d=0;
	for(i=0;i<a;i++)
	{
		scanf("%d%d",&b[i],&c[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=b[i];j<=c[i];j++)
		{
			if(last(j))
			{
			//	printf("%d ",j);
				d+=1;
			}
		}
		printf("%d
",d);
		d=0;
   }
}
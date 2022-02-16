#include<stdio.h>
int nine(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c+=1;
		}
	}
	if(c==9)
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
	int a,i,c=0;
	scanf("%d",&a);//printf("%d",nine(36));
	for(i=0;i<=a;i++)
	{
		if(nine(i))
		{
			printf("%d ",i);
			c+=1;
		}
	}
	printf("
Total=%d",c);
}
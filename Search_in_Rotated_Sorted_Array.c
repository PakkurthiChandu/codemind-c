#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,s,c=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	scanf("%d",&s);
	for(i=0;i<a;i++)
	{
		if(b[i]==s)
		{
			printf("%d",i);
			c+=1;
			break;
		}
	}
	if(c==0)
	{
		printf("-1");
	}
	
}
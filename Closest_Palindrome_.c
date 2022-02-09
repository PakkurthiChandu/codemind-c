#include<stdio.h>
int pal(int a)
{
	int b,r=0;
//	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		r=r*10+b;
	}
	return r;
}
int main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=a-1;i>0;i--)
	{
		if(i==pal(i))
		{
	    //	printf("%d ",i);
			break;
		}
	}
	for(j=a+1;j<(a+50);j++)
	{
	if(j==pal(j))
	{
	   //printf("%d",j);
	   break;	
	}
	}
	if((a-i)==(j-a))
	{
		printf("%d %d",i,j);
	}
	else if((a-i)>(j-a))
	{
		printf("%d",j);
		
	}
	else
	{
		printf("%d",i);
	}
}
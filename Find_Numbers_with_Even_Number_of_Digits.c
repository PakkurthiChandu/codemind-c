#include<stdio.h>
int even(int a)
{
	int b,c=0,d=0;
    while(a!=0)
	{
		b=a%10;
		a=a/10;
		d+=1;
	}
	if(d%2==0)
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
	int a,count=0;
	scanf("%d",&a);
	int b[a],i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
for(i=0;i<a;i++)
{
	if(even(b[i]))
	{
		count+=1;
	}
}
printf("%d",count);
	
	
}
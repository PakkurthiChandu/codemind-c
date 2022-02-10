#include<stdio.h>
#include<math.h>
int perfectsquare(int a)
{
	int b;
	b=sqrt(a);
	if(b*b==a)
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
	int b[a],i,s=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		if(perfectsquare(b[i])==1)
		{
		//	printf("%d",b[i]);
			s+=b[i];
		}
	}
	printf("%d",s);
	
}
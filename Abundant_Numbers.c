#include<stdio.h>
int main()
{
	int a,i,s=0;
	scanf("%d",&a);
	for(i=a-1;i>0;i--)
	{
		if(a%i==0)
		{
			s+=i;
		}
	}
	if(s>a)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
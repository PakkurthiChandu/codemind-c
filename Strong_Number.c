#include<stdio.h>
int main()
{
	int a,b,p=1,i,s=0,t;
	scanf("%d",&a);
	t=a;
	while(a!=0)
	{
		b=a%10;
		for(i=b;i>0;i--)
		{
			p*=i;
		}//printf("%d  ",p);
		s+=p;
		p=1;
		a=a/10;
	}
	if(s==t)
	{
		printf("The number %d is a strong number",t);
	}
	else
	{
		printf("The number %d is not a strong number",t);
	}
}
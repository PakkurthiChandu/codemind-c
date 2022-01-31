#include<stdio.h>
int main()
{
	int a,b,s=0,c=0;
	scanf("%d",&a);
	while(1)
	{
	while(1)
	{
		b=a%10;
		a=a/10;
		s+=b;
		c+=1;
		if(a==0)
		{
			break;
		}
	}
	a=s;
	if(c==1)
	{
		printf("%d",s);
		break;
	}
	c=0;
	s=0;
}
	
}
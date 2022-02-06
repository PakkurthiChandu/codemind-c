#include<stdio.h>
int main()
{
	int a,b,c,d,r=0;
	scanf("%d%d",&a,&b);
	for(;a<=b;a++)
	{  c=a;
		while(c!=0)
		{
			d=c%10;
			c=c/10;
			r=r*10+d;
		}
		if(r==a)
		{
			printf("%d ",r);
		}
		r=0;
		
	}
}
#include<stdio.h>
#include<math.h>
int main()
{
	int a,r=0,s=0,b,c,i=0,d,t=0;
	scanf("%d",&a);t=a;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		r=r*10+b;
	}
	//printf("%d",r);
	while(r!=0)
	{
		i++;
		c=r%10;//printf("%d",i);
		r=r/10;
		d=pow(c,i);
		s=s+d;
	}
	if(t==s)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
			

}
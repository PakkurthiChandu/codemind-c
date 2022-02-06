#include<stdio.h>
#include<math.h>
int main()
{
	int a,i=0,d=0,s=0,e,f;
	scanf("%d",&a);
	while(d<=a)
	{    i+=1;s=d;
		d=pow(2,i);
		
	}
	e=a-s;
	f=d-a;
	if(e<f)
	{
		printf("%d",e);
	}
	else
	{
		printf("%d",f);
	}
}
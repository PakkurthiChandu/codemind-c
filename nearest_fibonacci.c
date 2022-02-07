#include<stdio.h>
int main()
{
	int a,f=0,s=1,sum=0,i,b,c,t=0;
	scanf("%d",&a);
	//printf("%d",f);
	//printf("%d",s);
	for(i=3;i<=(a+1);i++)
	{
		sum=f+s;
		f=s;
		s=sum;
		if(f>a)
		{
			break;
		}
      //	printf("%d",f);
      	t=f;
	}
	//printf("  %d",f);
	b=f-a;
	c=a-t;
	//printf("  %d",b);
	//printf("
%d   ",c);
	if(b==c)
	{
		printf("%d %d",t,f);
	}
	else if(b<c)
	{
		printf("%d",f);
	}
	else
	{
		printf("%d",t);
	}
}
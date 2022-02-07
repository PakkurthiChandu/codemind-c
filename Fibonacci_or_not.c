#include<stdio.h>
int main()
{
	int a,f=0,s=1,sum=0,i,b,c=0,t=0;
	scanf("%d",&a);
	for(i=3;i<=(a+1);i++)
	{
		sum=f+s;
		f=s;
		s=sum;
		if(s==a)
		{
			c+=1;
			break;
		}
      	t=f;
	}
	if(a==0||a==1||c==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}

}
#include<stdio.h>
int sum(int a)
{
	int b,s=0;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		s+=b*b;
	}
	return s;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=a;
	while(2)
	{
	//	printf("%d",b);
    	if(b<10)
	    {
		if(b==1||b==7)
		{
			printf("True");
			break;
		}
		else
		{
			printf("False");
			break;
		}
	   }
	   else
	   {
	   	b=sum(b);
	   }
    }
}
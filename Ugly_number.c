#include<stdio.h>
int main()
{
	int a,c=0;
	scanf("%d",&a);
	while(2)
	{
	   if(a%2==0)
	   {
	   	a=a/2;
	   	c+=1;
	   }
	   else if(a%3==0)
	   {
	   	a=a/3;
	   	c+=1;
	   }
	   else if(a%5==0)
	   {
	   	a=a/5;
	   	c+=1;
	   }
	   if(c==0)
	   {
	   	break;
	   }
	   c=0;
	}
	if(a==1)
	{
		printf("Ugly Number");
	}
	else
	{
		printf("Not Ugly Number");
	}
}
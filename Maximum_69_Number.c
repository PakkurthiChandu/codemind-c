#include<stdio.h>
int main()
{
	int a,b,c=0,r=0,rev=0,t=0,k,v=0;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		r=r*10+b;
		
	}t=r;
	while(t!=0)
	{
		b=t%10;
		t=t/10;
		if(v==0)
		 {
		if(b==6)
		{
			b=9;
			v+=1;
		}
	    }
	   rev=rev*10+b;
	}printf("%d",rev);
}
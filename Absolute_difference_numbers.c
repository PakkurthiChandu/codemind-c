#include<stdio.h>
int lastdigits(int a,int b)
{
	int d,c=0,r=0,reverse=0,e;
	while(a!=0)
	{
	d=a%10;
	a=a/10;
	c+=1;
	r=r*10+d;
	if(c==b)
	{
		break;
	}
    }
    while(r!=0)
	{
		e=r%10;
		r=r/10;
		reverse=reverse*10+e;
	}
	return reverse;
}
int firstdigits(int a,int b)
{
	int c,k=0,d,r=0,rev=0;
	while(a!=0)
	{
		d=a%10;
		a=a/10;
		r=r*10+d;
	}
	while(r!=0)
	{
		c=r%10;
		r=r/10;
		rev=rev*10+c;
		k+=1;
		if(k==b)
		{
           return rev;
		}
	}
	
}

int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=firstdigits(a,b)-lastdigits(a,b);
	if(c<0)
	{
	    c=-c;
	}
	printf("%d",c);
}
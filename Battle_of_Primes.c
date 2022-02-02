#include<stdio.h>
int main()
{
	int a,b,t=0,j,d=0,c=0,i;
	scanf("%d%d",&a,&b);
	c=a+b;
	t=c;
     while(1)
	{
		c++;
		for(j=1;j<=c;j++)
		{
			if(c%j==0)
			{
				d+=1;
			}
		
		}
		if(d==2)
		{
			printf("%d",c-t);
			break;
		}
		else
		{
			
			d=0;
		}
	}
		
	
}
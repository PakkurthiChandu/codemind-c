#include<stdio.h>
int main()
{
	int a,b,d=0,c=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0;
	scanf("%d",&a);
	while(1)
	{
		b=a%10;
		a=a/10;
		if(b==1)
		{
			c+=1;
		}
		else if(b==2)
		{
			e+=1;
		}
		else if(b==3)
		{
			f+=1;
		}
		else if(b==4)
		{
			g+=1;
		}
	    else if(b==5)
		{
			h+=1;
		}
		else if(b==6)
		{
			i+=1;
		}
		else if(b==7)
		{
			j+=1;
		}
		else if(b==8)
		{
			k+=1;
		}
		else if(b==9)
		{
			l+=1;
		}
		else if(b==0)
		{
			m+=1;
		}
		
		if(a==0)
		{
			break;
		}
		
	}
	if(c>1||d>1||e>1||f>1||g>1||h>1||i>1||j>1||k>1||l>1||m>1)
	{
		printf("Not Unique Number");
	}
	else
	{
		printf("Unique Number");
	}
	
}
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],c[a],d[a],e[a],i,v=0,j;
	for(i=0;i<a;i++)
	{
		scanf("%d%d%d%d",&b[i],&c[i],&d[i],&e[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=1;j<=b[i];j++)
		{
		if((j%c[i]!=0&&j%d[i]==0)||(j%c[i]==0&&j%d[i]!=0))
		{
		 v+=1;
		 if(v>e[i])
		 {
		 	break;
		 }
		}
	    }
	    if(v>=e[i])
	    {
	    	printf("Win
");
		}
		else
		{
			printf("Lose
");
		}
		v=0;
	}
	
	
}
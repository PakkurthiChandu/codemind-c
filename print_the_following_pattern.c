#include<stdio.h>
 int main()
{
	int a,j,k;
	char x;
	scanf("%d",&a);
	int b[a],i;
	for(i=1;i<=a;i++)
	{
        b[i]=i;
	}
	for(j=1;j<=a;j++)
	{  
		for(k=1;k<=a;k++)
		{
			if(j==k)
			{
				printf("0");
			}
			else
			{
				printf("x");
			}
	   }   
	   k=0;	
	    printf("
");
	}	
	return 0;
}

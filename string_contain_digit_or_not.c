#include<stdio.h>
int main()
{
	char a[1000];
	scanf("%s",a);
	int i,c=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>=48&&a[i]<=57)
		{
			c+=1;
		}
	}
	if(c==0)
	{
	    printf("Doesn't contain digit");
	}
	else
	{
     printf("Contains %d digit",c);
	}
}
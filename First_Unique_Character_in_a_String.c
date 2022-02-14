#include<stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int i,j,c=0,d=0;
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=0;a[j]!=NULL;j++)
		{
			if(a[i]==a[j])
			{
				c+=1;
			}
		}//printf("%d",c);
		if(c==1)
		{
			printf("%d",i);
			d+=1;
			break;
		}
		c=0;
	}
	if(d!=1)
	{
		printf("-1");
	}
}
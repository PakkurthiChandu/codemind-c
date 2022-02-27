#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,j,ans=0,c=0,d=0;
	scanf("%d",&a);
	char b[a][100];
	for(i=0;i<a;i++)
	{
	scanf("%s",b[i]);
	}//printf("%s",b[1]);
	for(i=0;i<a;i++)
	{
		for(j=0;b[i][j]!=NULL;j++)
		{
			if(b[i][j]=='+')
			{
				c+=1;
			}
			if(b[i][j]=='-')
			{
				d+=1;
			}
		}
		if(c!=0)
		{
			ans+=1;
		}
		if(d!=0)
		{
			ans-=1;
		}c=0;d=0;
	}
	printf("%d",ans);
}
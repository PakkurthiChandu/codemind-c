#include<stdio.h>
int main()
{
	char a[100],e[100],o[100];
	scanf("%s",a);
	int i,j=0,k=0,c=0,d=0,f=0;
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			if((a[i]-48)%2==0)
			{
				e[j]=a[i];
				j++;
			}
			else
			{
				o[k]=a[i];
				k++;
			}
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			
		}
		else
		{
			c+=1;
		}
	}
	e[j]=NULL;
	o[k]=NULL;
	i=0;
	//printf("%s",o);
	if(c%2==0)
	{
		while(2)
		{
			if(e[i]!=NULL)
			{
				if(d==0)
				{
				printf("%c",e[i]);
			}
			}
		    if(o[i]!=NULL)
		    {
		    	if(f==0)
		    	{
		    	printf("%c",o[i]);
		        }
			}
			if(e[i]==NULL)
			{
				d+=1;
			}
			if(o[i]==NULL)
			{
				f+=1;
			}
			if(d!=0&&f!=0)
			{
				break;
			}
			i++;
			
		}
	}
	else
	{
	//	printf("%d%d",o[i],e[i]);
	while(2)
	{
         	if(o[i]!=NULL)
			{
				if(f==0)
				{
				printf("%c",o[i]);
			   }
			}
		    if(e[i]!=NULL)
		    {
		    	if(d==0)
		    	{
		    	printf("%c",e[i]);
		          }
			}
			if(e[i]==NULL)
			{
				d+=1;
			}
			if(o[i]==NULL)
			{
				f+=1;
			}
			if(d!=0&&f!=0)
			{
				break;
			}
			i++;
		}
	}
}
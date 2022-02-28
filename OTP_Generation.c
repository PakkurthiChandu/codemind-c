#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int i;
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]%2!=0)
		{
			printf("%d",(a[i]-48)*(a[i]-48));
		}
	}
}
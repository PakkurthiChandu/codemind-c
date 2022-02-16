#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	if(strlen(str)==10)
	{
	   if(str[0]!='0')
	   {
	   	printf("Valid");
	   }
	   else
	   {
	   	printf("Invalid");
	   }
	}
	else
	{
		printf("Invalid");
	}
}
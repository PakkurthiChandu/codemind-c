#include<stdio.h>
int n(char a)
{
	switch(a)
	{
		    case 'I':return 1;
			case 'V':return 5;break;
			case 'X':return 10;break;
			case 'L':return 50;break;
			case 'C':return 100;break;
			case 'D':return 500;break;
			case 'M':return 1000;break;
			default:return 0;break;
	}
}
int main()
{
	char a[100];
	scanf("%s",a);
	int i,t;
	t=n(a[0]);
	for(i=1;a[i]!=NULL;i++)
	{
		if(n(a[i-1])<n(a[i]))
		{
			t=t-n(a[i-1])+(n(a[i])-n(a[i-1]));
		}
		else
		{
			t+=n(a[i]);
		}
	}
	printf("%d",t);
}
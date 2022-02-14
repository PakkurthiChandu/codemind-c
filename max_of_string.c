#include<stdio.h>
int main()
{
	char a[1000];
	scanf("%[^
]",a);
	int i,max=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%c",max);
}
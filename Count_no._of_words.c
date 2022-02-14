#include<stdio.h>
int main()
{
	char a[100];
	scanf("%[^
]",a);
	int i,c=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==' ')
		{
			c+=1;
		}
	}
	printf("%d",c+1);
}
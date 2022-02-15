#include<stdio.h>
int main()
{
	char a[100];
	scanf("%[^
]",a);
	int s,i;
	for(i=0;a[i]!=0;i++)
	{
        if(a[i]>='0'&&a[i]<='9')
		{
			s+=a[i]-48;
		}
	}
	printf("%d",s);
}
#include<stdio.h>
int main()
{
	char a[1000];
	scanf("%[^
]",a);
	int i,c=0;
	for(i=0;a[i]!=NULL;i++)
     {
	c+=1;
     }
     for(i=c-1;i>=0;i--)
     {
     	printf("%c",a[i]);
	 }
}
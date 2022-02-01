#include<stdio.h>
int main()
{
	int a,s=0,d,j;
	scanf("%d",&a);
	d=2*a;
	int b[d],i;
	for(i=0;i<d;i++)
	{
		scanf("%d",&b[i]);
	}

	for(j=0;j<d;j+=2)
	{
		s=b[j]+b[j+1];
	printf("%d
",s);
	s=0;
	}
}
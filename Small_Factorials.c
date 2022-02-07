#include<stdio.h>
int main()
{
	int a,i,d,p=1,j;
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
  for(j=0;j<a;j++)
  {   d=b[j];
  p=1;
  
	for(i=1;i<=b[j];i++)
	{
		p*=d;
		d=b[j]-i;
     //	printf("%d",d);
	}
	printf("%d
",p);
}
}
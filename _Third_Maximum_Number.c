#include<stdio.h>
int main()
{
	int a,max=0,max2=0,max3=0;
	scanf("%d",&a);
	int b[a],i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		if(b[i]>max)
		{
			max3=max2;
			max2=max;
			max=b[i];
		}
		if(b[i]<max&&b[i]>max2)
		{
			max2=b[i];
		}
	}
	for(i=0;i<a;i++)
	{
		if(b[i]<max2&&b[i]>max3)
		{
			max3=b[i];
		}
	}
     if(max!=0&&max2!=0&&max3!=0)
     {
     	printf("%d",max3);
     }
	 else
	 {
	 	printf("%d",max);
	 }
}

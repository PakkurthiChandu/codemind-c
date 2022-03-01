#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],i,x=0,y=0;
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i+=2)
	{
		x+=b[i];
	}
	for(i=1;i<a;i+=2)
	{
		y+=b[i];
	}
	if((x-y)%4==0||(y-x)%4==0)
	{
		printf("X");
	}
	else
	{
	printf("Y"); 
    }
}
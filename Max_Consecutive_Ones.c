#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b[a],j,i,max=0,s=0;
	for(i=0;i<a;i++)
     {
     	scanf("%d",&b[i]);
	 }
	 for(i=0;i<a;i++)
	 {
	 	s+=b[i];
	 	if(b[i]==0)
	 	{
	 		s=0;
		 }
		 if(s>max)
		 {
		 	max=s;
		 }
	 }
	 printf("%d",max);
}
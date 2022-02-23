#include<stdio.h>
int main()
{
	int a,i,j,c=0,d=0;
	scanf("%d",&a);
	char s[a][100];
	for(i=0;i<a;i++)
	{
		scanf("%s",s[i]);
	}
   for(i=0;i<a;i++)
   {
   	for(j=0;s[i][j]!=NULL;j++)
   	{
   		if(s[i][j]>='0'&&s[i][j]<='9')
   		{
   			c+=1;
		}
		d+=1;
	   }
   if(c==d)
   {
   	printf("True
");
   }
   else
   {
   	printf("False
");
   }
   c=0;
   d=0;
}
}
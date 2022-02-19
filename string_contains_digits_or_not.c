#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
  char b[a][100];
  int i,j,c=0;
  for(i=0;i<a;i++)
  {
  	scanf("%s",b[i]);
  }
  for(i=0;i<a;i++)
  {
  	//printf("%s",b[i]);
  	for(j=0;b[i][j]!=NULL;j++)
  	{
  	//	printf("%c
",b[i][j]);
  	if(b[i][j]>='0'&&b[i][j]<='9')
  	{
  	//	printf("%c",b[i][j]);
  		c+=1;
	  }
	  
	  }
	  if(c==0)
	  {
	  	printf("No
");
	  }
	  else
	  {
	  	printf("Yes
");
	  }c=0;
  }  
  
}
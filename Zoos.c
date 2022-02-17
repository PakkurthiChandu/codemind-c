#include<stdio.h>
int main()
{
  char str[1000];
  scanf("%s",str);
  int i,o=0,z=0;
  for(i=0;str[i]!=NULL;i++)
  {
  	if(str[i]=='o')
  	{
  		o+=1;
	  }
	  if(str[i]=='z')
	  {
	  	z+=1;
	  }
  }
  if(2*z==o)
  {
  	printf("Yes");
  }
  else
  {
  	printf("No");
  }
}
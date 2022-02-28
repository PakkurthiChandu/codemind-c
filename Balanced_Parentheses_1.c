#include<stdio.h>
#include<string.h>
int main()
{
      char a[100];
      scanf("%s",a);
      int i,c=0,d=0,e=0,f=0,g=0,h=0;
      for(i=0;i<(strlen(a));i++)
      {
      	if(a[i]=='(')
      	{
      		c+=1;
		  }
		  else if(a[i]==')')
		  {
		  	d+=1;
		  }
		  else if(a[i]=='{')
		  {
		  	e+=1;
		  }
		  else if(a[i]=='}')
		  {
		  	f+=1;
		  }
		  else if(a[i]=='[')
		  {
		  	g+=1;
		  }
		  else if(a[i]==']')
		  {
		  	h+=1;
		  }
		  
	  }
	  if(c==d&&e==f&&g==h)
	  {
	  	printf("True");
	  }
	  else
	  {
	  	printf("False");
	  }
}
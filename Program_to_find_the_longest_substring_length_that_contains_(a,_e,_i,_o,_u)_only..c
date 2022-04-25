#include<stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int i,c=0,max=0;
	for(i=0;a[i]!=NULL;i++)
	{
		switch(a[i])
		  {
		  	case 'a':c+=1;break;
		  	case 'e':c+=1;break;
		  	case 'i':c+=1;break;
		  	case 'o':c+=1;break;
		  	case 'u':c+=1;break;
		  }
		  if(a[i+1]!='a'&&a[i+1]!='e'&&a[i+1]!='i'&&a[i+1]!='o'&&a[i+1]!='u')
		  {
		  	if(c>max)
		  	{
		  		max=c;
		    }
		    c=0;
		  }
	}
	printf("%d",max);
	return 0;
}
#include<stdio.h>
int pr(int a)
{
	int i;
	if(a==1)
	{
		return 0;
	}
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
  int a;
  scanf("%d",&a);
  int b[a],i,t,k;
  for(i=0;i<a;i++)
  {
  	scanf("%d",&b[i]);
  }	
  for(i=0;i<a;i++)
 {
	  	for(t=b[i];t>0;t--)
	  	{
	  		if(pr(t))
	  		{
	  		   
	  			break;
			  }
		  }
		  	for(k=b[i];;k++)
	  	{
	  		if(pr(k))
	  		{
	  			break;
			  }
		  }
		  if((b[i]-t)<=(k-b[i]))
		  {
		  	printf("%d
",t);
		  }
		  else
		  {
		  	printf("%d
",k);
		  }
	  }
} 
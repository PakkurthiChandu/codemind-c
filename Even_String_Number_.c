#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],t;
	scanf("%[^
]",a);
	int i,j=0,k,c=0;
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]=NULL;
//	printf("%s",b);
   for(i=0;b[i]!=NULL;i++)
   {
   	 for(j=i+1;b[j]!=NULL;j++)
   	 {
   	 	if(b[i]<b[j])
   	 	{
   	 		t=b[i];
   	 		b[i]=b[j];
   	 		b[j]=t;
			}
		}
   }
  // printf("%s",b);
  for(i=0;b[i]!=NULL;i++)
  {
  	for(j=i+1;b[j]!=NULL;j++)
  	{
  		if(b[i]==b[j])
  		{
  			for(k=j;b[k]!=NULL;k++)
  			{
  				b[k]=b[k+1];
			  }
		  }
	  }
  }
  //printf("%c",b[strlen(b)-1]);
 if((b[strlen(b)-1])%2==0)
  {
 	printf("%s",b);
  //	printf("ccccc");
  }
  else
  {
  	for(i=(strlen(b)-1);i>=0;i--)
  	{
  		if(b[i]%2==0)
  		{
  			t=b[i];
  		//	printf("%c",t);
  			for(j=i;b[j]!=NULL;j++)
  			{
  				b[j]=b[j+1];
  				if(b[j]==NULL)
  				{
  					b[j]=t;
				  }
			}
			 // b[strlen(b)]=t;
			 // printf("%c",b[j]);
			 b[strlen(b)]=NULL;
			 // printf("%s",b);
			  c+=1;
			  break;
		  }
	  }
	  if(c==0)
	  {
	  	printf("-1");
	  }
	  else
	  {
	  	printf("%s",b);
	  }
	 // printf("%s",b);
  }
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
//	scanf("%[^
]",b);
	int i,j,t;
	strcat(a,b);
	//printf("%s",a);
	for(i=0;a[i]!=NULL;i++)
	{
	     for(j=i+1;a[j]!=0;j++)
          {
          	if(a[i]>a[j])
          	{
          		t=a[j];
          		a[j]=a[i];
          		a[i]=t;
			}
		  }
	}
	printf("%s",a);
}
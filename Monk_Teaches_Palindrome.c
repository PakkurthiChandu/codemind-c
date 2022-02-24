#include<stdio.h>
int pal(int a)
{
	int b,r=0,t=a;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		r=r*10+b;
	}
	if(r==t)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int eo(int a)
{
	int b,r=0,c=0;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
	  c+=1;
	}
	if(c%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a,i,r=0,j;
	scanf("%d",&a);
	char x[a][100];
	for(i=0;i<a;i++)
	{
		scanf("%s",x[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=0;x[i][j]!=NULL;j++)
		{
			if((x[i][j]-96)<10)
			{
			r=r*10+(x[i][j]-96);
		//	printf("c");
		    }
		    else
		    {
		    	r=r*10+(x[i][j]-96)/10;
		    //	printf("a");
			}
		}
		
	//	printf("%d",r);
    if(eo(r))
	{
	if(pal(r))
	{
		printf("YES EVEN
");
		
	}
	else
	{
		printf("NO
");
	}
    }
    else
    {
    		if(pal(r))
	{
		printf("YES ODD
");
		
	}
	else
	{
		printf("NO
");
	}
    }
		r=0;
	}
}
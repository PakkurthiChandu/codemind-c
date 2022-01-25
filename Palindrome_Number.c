#include<stdio.h>
int main()
{
    int a,j,c=0,d,r=0;
    scanf("%d",&a);
    int b[a],i;
    for(i=0;i<a;i++)
    {
      scanf("%d",&b[i]);  
    }
    for(j=0;j<a;j++)
    {
        c=b[j];
        while(1)
        {
            d=c%10;
            c=c/10;
            r=r*10+d;
            if(c==0)
            {
                break;
            }
        }
        if(b[j]==r)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        r=0;
        c=0;
        d=0;
    }
}
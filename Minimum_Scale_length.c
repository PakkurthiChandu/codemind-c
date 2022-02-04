#include<stdio.h>
int main()
{
    int a,j,c=0,small=9999;
    scanf("%d",&a);
    int b[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<a;i++)
    {
        if(b[i]<small)
        {
            small=b[i];
        }
    }
    for(i=small;i>0;i--)
    {
        for(j=0;j<a;j++)
        {
            if(b[j]%i==0)
            {
                c+=1;
            }
        }
        if(c==a)
        {
            printf("%d",i);
            break;
        }
        else
        {
            c=0;
        }
    }
}
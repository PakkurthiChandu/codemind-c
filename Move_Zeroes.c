#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        if(b[i]!=0)
        {
            printf("%d ",b[i]);
        }
    }
    for(i=0;i<a;i++)
    {
        if(b[i]==0)
        {
            printf("%d ",b[i]);
        }
    }
}
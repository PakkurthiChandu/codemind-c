#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a],i,p=1,j;
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(b[i]!=b[j])
            {
                p*=b[j];
            }
        }
        printf("%d ",p);
        p=1;
    }
}
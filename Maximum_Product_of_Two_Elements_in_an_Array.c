#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a],i,j,max=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if((b[i]-1)*(b[j]-1)>max)
            {
                max=(b[i]-1)*(b[j]-1);
            }
        }
    }
    printf("%d",max);
    return 0;
}
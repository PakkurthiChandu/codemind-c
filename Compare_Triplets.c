#include<stdio.h>
int main()
{
    int a[3],b[3],c=0,s=0,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            c+=1;
        }
        else if(b[i]>a[i])
        {
            s+=1;
        }
    }
    printf("%d %d",c,s);
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[i],max=-9999,c=0,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=max;;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c==n)
        {
            printf("%d",i);
            break;
        }
    }
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,m,t;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    m=a[n-1];
    a[n-1]=-1;
    for(i=n-2;i>=0;i--)
    {
        t=m;
        if(a[i]>m)
        m=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
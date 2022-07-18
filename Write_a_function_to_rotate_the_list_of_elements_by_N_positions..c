#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],r,i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&r);
    while(r>n)
    {
        r=r-n;
    }
    for(i=n-r;i<n;i++)
    printf("%d ",a[i]);
    for(i=0;i<n-r;i++)
    printf("%d ",a[i]);
}
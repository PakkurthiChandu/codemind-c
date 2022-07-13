#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,r=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        r=r*10+a[i];
    }
    int c[100],d=0;
    r=r+1;
    while(r!=0)
    {
        c[d]=r%10;
        r=r/10;
        d++;
    }
    for(i=d-1;i>=0;i--)
    {
        printf("%d ",c[i]);
    }
}
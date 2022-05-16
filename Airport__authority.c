#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,s=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>b)
        s+=2;
        else
        s+=1;
    }
    printf("%d",s);
}
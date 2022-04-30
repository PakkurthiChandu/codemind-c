#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,c=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        s+=a[i];
        else
        c+=a[i];
    }
    printf("%d",(s-c));
    return 0;
}
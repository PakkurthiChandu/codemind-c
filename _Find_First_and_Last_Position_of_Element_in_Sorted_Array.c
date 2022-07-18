#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,se;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&se);
    int f=-1,s=-1,c=0;
    for(i=0;i<n;i++)
    {
        if(c==0 && a[i]==se)
        {
            f=i;
            c=1;
        }
        if(a[i]==se)
        {
            s=i;
        }
    }
    printf("%d %d",f,s);
}
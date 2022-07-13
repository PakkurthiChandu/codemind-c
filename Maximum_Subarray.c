#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,m=-999999,j,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s+=a[j];
            if(s>m)
            {
                m=s;
            }
        }
    }
    printf("%d",m);
}
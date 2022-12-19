#include<stdio.h>
int main()
{
    int n,j,c=0,t=99999,m=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c>m || (c==m && a[i]<t))
        {
            t=a[i];
            m=c;
        }
    }
    printf("%d",t);
}
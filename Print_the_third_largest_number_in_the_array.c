#include<stdio.h>
int max(int *a,int n)
{
    int m=0,c,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            c=i;
        }
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t,s,j,k;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                j--;n--;
            }
        }
    }
    if(n>=3)
    {
    for(i=0;i<3;i++)
    {
        t=max(a,n);
        s=a[t];
        a[t]=0;
    }
    printf("%d",s);
    }
    else
    {
        printf("It is not possible");
    }
}
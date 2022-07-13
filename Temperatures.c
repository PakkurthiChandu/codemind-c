#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c,j,d=0,e[100],f=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        d=0;
        for(j=i+1;j<n;j++)
        {
            c++;
            if(a[i]<a[j])
            {
                e[f]=c;
                f++;
                d=1;
                break;
            }
        }
        if(d==0)
        {
            e[f]=0;
            f++;
        }
    }
    for(i=0;i<f;i++)
    printf("%d ",e[i]);
}
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],i,s=0,j,c=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            s+=a[j];
            if(s==m)
            {
                c+=1;
                break;
            }
        }
        s=0;
    }
    printf("%d",c);
}
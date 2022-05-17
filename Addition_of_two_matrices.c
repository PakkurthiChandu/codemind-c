#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]+b[i][j]);
            if(c<n-1)
            {
            printf(" ");
            c+=1;
            }
        }
        printf("
");
        c=0;
    }
}
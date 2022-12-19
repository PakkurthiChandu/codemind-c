#include<stdio.h>
int main()
{
    int n,m,j,i,t,s=0,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        s=0;
        for(j=0;j<m-1;j++)
        {
        scanf("%d",&h);
        s+=h;
        }
        t=(m*(m+1))/2;
        printf("%d
",t-s);
    }
}
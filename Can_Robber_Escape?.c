#include<stdio.h>
int main()
{
    int a,j,c=0;
    scanf("%d",&a);
    int b[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<a;j++)
    {
        if(b[j]%2!=0)
        {
            c+=1;
        }
    }
    if(c<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
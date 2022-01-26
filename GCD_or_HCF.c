#include<stdio.h>
int main()
{
    int a,b,c=0,small;
    scanf("%d%d",&a,&b);
    small=a<b?a:b;
    for(;small>0;small--)
    {
        if(a%small==0&&b%small==0)
        {
             c=small;
             break;
        }
    }
    printf("%d",c);
}
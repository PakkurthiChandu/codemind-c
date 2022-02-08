#include<stdio.h>
int main()
{
    int a,b,c,d=0,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            d+=1;
        }
    }
    printf("%d",d);
    return 0;
}
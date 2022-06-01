#include<stdio.h>
int se(int a)
{
    int b,t=a,c=0,d=0;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(b!=0 and t%b==0)
        c+=1;
        d+=1;
    }
    if(d==c)
    return 1;
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(se(i))
        printf("%d ",i);
    }
}
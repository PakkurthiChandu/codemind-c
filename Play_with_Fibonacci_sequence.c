#include<stdio.h>
int main()
{
    int a,f=0,s=1,i=3,t;
    scanf("%d",&a);
    printf("%d %d",f,s);
    while(i<=a)
    {
        t=f+s;
        f=s;
        s=t;
        printf(" %d",t);
        i++;
    }
}
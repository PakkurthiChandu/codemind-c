#include<stdio.h>
int main()
{
    int a,t,b,r=0;
    scanf("%d",&a);
    t=a;
    while(1)
    {
        b=a%10;
        a=a/10;
        r=r*10+b;
        if(a==0)
        {
            break;
        }
        
    }
    if(t==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
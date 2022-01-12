#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    while(1)
    {
        b=a%10;
        a=a/10;
        if(b>c)
        {
        c=b;
        }
        if(b==0)
        {
            printf("%d",c);
            break;
        }
    }
}
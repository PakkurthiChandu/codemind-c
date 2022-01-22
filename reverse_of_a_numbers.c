#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(1)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
        if(a==0)
        {
            break;
        }
        
    }
}
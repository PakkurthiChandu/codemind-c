#include<stdio.h>
int main()
{
    int a,b,s=0,t=0;
    scanf("%d",&a);t=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        s+=b;
    }
    if(t%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
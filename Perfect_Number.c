#include<stdio.h>
int main()
{
    int a,s=0,i;
    scanf("%d",&a);
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            s+=i;
        }
    }
    if(s==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}
#include<stdio.h>
int main()
{
    int a,b,c,count=0;
    scanf("%d",&a);
    b=a*a;
    while(1)
    {
        c=b%10;
        b=b/10;
        count+=c;
        if(c==0)
        {
            break;
        }
        
    }
    if(count==a)
    {
        printf("Neon Number");
        
    }
    else
    {
        printf("Not Neon Number");
    }
}
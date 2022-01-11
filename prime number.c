#include<stdio.h>
int main()
{
    int a,b,c,count=0;
    scanf("%d",&a);
    b=1;
    while(b<=a)
    {
        c=a%b;
        if(c==0)
        {
        count+=1;
        }
        b++;
        
        
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    
    return 0;
}
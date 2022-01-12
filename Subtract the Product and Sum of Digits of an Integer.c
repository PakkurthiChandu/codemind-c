#include<stdio.h>
int main()
{
    int a, b,c=0,d,p=1;
    scanf("%d",&a);
    while(1)
    {
        b=a%10;
        a=a/10;
         c+=b;
         if(b<=0)
         {
             break;
         }
         p*=b;
    }
    d=p-c;
    printf("%d",d);
    return 0;
}
#include<stdio.h>
int count(int c)
{
    int b,k=0;
    while(c!=0)
    {
        b=c%10;
        c=c/10;
        k++;
    }
    return k;
}
int au(int a)
{
    int r=0,rev=0,b,c,k=0,t=a;
    c=count(a);
    a=a*a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(c==k)
        break;
        r=r*10+b;
        k++;
    }
    while(r!=0)
    {
        b=r%10;
        r=r/10;
        rev=rev*10+b;
    }
    if(t==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    if (au(a))
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
    
}
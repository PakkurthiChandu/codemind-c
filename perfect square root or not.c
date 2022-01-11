#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=sqrt(a);
    c=b*b;
    if(a==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
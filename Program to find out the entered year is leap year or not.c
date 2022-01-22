#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    }
    else
    {
          if(a%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    }

}
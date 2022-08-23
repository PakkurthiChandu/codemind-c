#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int b;
    scanf("%s",a);
   // printf("%c%c",a[0],a[1]);
    b=a[0]-48;
    b=b*10+a[1]-48;
    if(b==0)
    printf("12:00 AM");
    else if(b==1)
    {
        printf("01:%c%c AM",a[3],a[4]);
    }
    else if(b==2)
    {
        printf("02:%c%c AM",a[3],a[4]);
    }
    else if(b==3)
    {
        printf("03:%c%c AM",a[3],a[4]);
    }
    else if(b==4)
    {
        printf("04:%c%c AM",a[3],a[4]);
    }
    else if(b==5)
    {
        printf("05:%c%c AM",a[3],a[4]);
    }
    else if(b==6)
    {
        printf("06:%c%c AM",a[3],a[4]);
    }
    else if(b==7)
    {
        printf("07:%c%c AM",a[3],a[4]);
    }
    else if(b==8)
    {
        printf("08:%c%c AM",a[3],a[4]);
    }
    else if(b==9)
    {
        printf("09:%c%c AM",a[3],a[4]);
    }
    else if(b==10)
    {
        printf("10:%c%c AM",a[3],a[4]);
    }
    else if(b==11)
    {
        printf("11:%c%c AM",a[3],a[4]);
    }
    else if(b==12)
    {
        printf("12:%c%c PM",a[3],a[4]);
    }
    else if(b==13)
    {
        printf("01:%c%c PM",a[3],a[4]);
    }
    else if(b==14)
    {
        printf("02:%c%c PM",a[3],a[4]);
    }
    else if(b==15)
    {
        printf("03:%c%c PM",a[3],a[4]);
    }
    else if(b==16)
    {
        printf("04:%c%c PM",a[3],a[4]);
    }
    else if(b==17)
    {
        printf("05:%c%c%c%c PM",a[3],a[4]);
    }
    else if(b==18)
    {
        printf("06:%c%c PM",a[3],a[4]);
    }
    else if(b==19)
    {
        printf("07:%c%c PM",a[3],a[4]);
    }
    else if(b==20)
    {
        printf("08:%c%c PM",a[3],a[4]);
    }
    else if(b==21)
    {
        printf("09:%c%c PM",a[3],a[4]);
    }
    else if(b==22)
    {
        printf("10:%c%c PM",a[3],a[4]);
    }
    else if(b==23)
    {
        printf("11:%c%c PM",a[3],a[4]);
    }
    else if(b==24)
    {
        printf("12:%c%c AM",a[3],a[4]);
    }
}
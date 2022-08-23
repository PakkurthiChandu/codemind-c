#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int b;
    scanf("%[^
]s",a);
   // printf("%c%c",a[0],a[1]);
    b=a[0]-48;
    b=b*10+a[1]-48;
    if(b==12 && a[6]=='A')
    printf("00:%c%c",a[3],a[4]);
    else if(b==12 && a[6]=='P')
    printf("12:%c%c",a[3],a[4]);
    else if(a[6]=='P')
    printf("%d:%c%c",b+12,a[3],a[4]);
    else if(a[6]=='A')
    printf("%c%c:%c%c",a[0],a[1],a[3],a[4]);
}
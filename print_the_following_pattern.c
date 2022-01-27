#include<stdio.h>
int main()
{
    int a,i,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a;k++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}
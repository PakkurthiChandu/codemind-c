#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,se;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&se);
    for(i=0;i<n;i++)
    if(se==a[i])
    {
        printf("True");
        return 0;
    }
    printf("False");
}
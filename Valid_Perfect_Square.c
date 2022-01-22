#include<stdio.h>
#include<math.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b=sqrt(a[i]);
        if(b*b==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
     } 
     return 0;
}
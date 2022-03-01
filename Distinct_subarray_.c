#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=i;j<=b;j++)
        {
            s+=j;
            if(s%2!=0)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
    return 0;
}
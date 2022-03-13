#include<stdio.h>
int pri(int a)
{
    int i;
    if(a==1)
    return 0;
    else
    {
        for(i=2;i*i<=a;i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int a,i,j,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(pri(i))
        {
            for(j=1;j<=a;j++)
            {
                if(pri(j))
                {
                    if(i*j==a)
                    {
                        c+=1;
                        printf("%d %d",i,j);
                        return 0;
                    }
                }
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}
#include<stdio.h>
int main()
{
    int c=0,k=0,i,j;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        k++;
        for(j=0;a[j]!=NULL;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    if(c==k)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}
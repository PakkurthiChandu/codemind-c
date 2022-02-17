#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int i;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",a[i]);
        }
    }
    
}
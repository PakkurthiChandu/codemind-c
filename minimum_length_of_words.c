#include<stdio.h>
int main()
{
    char a[100];
    scanf("%[^
]",a);
    int i,min=9999,c=0,d;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
          if(c<min)
          {
          min=c;
          c=0;
          }
          d+=1;
        }
        c++;
    }
    if(d==0)
    printf("%d",c);
    else
    printf("%d",min);
}

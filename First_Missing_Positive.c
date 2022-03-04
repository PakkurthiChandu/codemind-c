#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b[a],i,j=1,c=0;
    for(i=0;i<a;i++)
   {
       scanf("%d",&b[i]);
   }
   while(2)
   {
       for(i=0;i<a;i++)
       {
           if(b[i]==j)
           {
               c+=1;
           }
       }
       if(c==0)
       {
           printf("%d",j);
           break;
       }
       c=0;
       j++;
   }
}
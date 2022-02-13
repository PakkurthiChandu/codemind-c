 #include<stdio.h>
int main()
{
     int a;
    scanf("%d",&a);
  long long int b[a],c=0,i;
   for(i=0;i<a;i++)
   {
    scanf("%lld",&b[i]);
   }
   for(i=0;i<a;i++)
    {
       c+=b[i];
    }
    printf("%lld",c);
}
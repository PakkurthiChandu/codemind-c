#include<stdio.h>
int main()
{
  float a,b,s=0;
  scanf("%f",&a);
  while(a>0)
  {
      b=1/a;
      s+=b;
      a--;
  }
printf("%.2f",s);
}
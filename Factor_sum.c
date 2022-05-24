#include<stdio.h>
#include<string.h>
int fact(int a)
{
    int i,s=0;
    for(i=1;i<a+1;i++)
    if(a%i==0)
    s+=i;
    return s;
}
int main()
{
    char a[100];
    scanf("%s",a);
    int i,m=0,n=strlen(a),b[n],s,j,c=0,d[n],k=0,l;
    for(i=0;i<n;i+=2)
    {
        b[m]=a[i]-48;
        m++;
    }
    for(i=0;i<m;i++)
    {
        s=fact(b[i]);
    //printf("%d",s);
    for(j=0;j<m;j++)
    {
        if(s==b[j])
        {
        //printf("%d ",b[i]);
        d[k]=b[i];
        k+=1;
        c+=1;
        }
    }
    }
    if(k==0)
    printf("-1");
    else
    {
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
                if(d[i]>d[j])
                {
                 l=d[i];
                 d[i]=d[j];
                 d[j]=l;
                }
            }
        }
    for(i=0;i<k;i++)
    printf("%d ",d[i]);
    }
}
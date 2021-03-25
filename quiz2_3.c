#include <stdio.h>
#include <math.h>
int palin(int a)
{
    int i=1,j,k,count=0;
    for(i;i<=a;i++)
    {
        j=i;
        k=flip(i);
        if(j==k)
        {
          count++;
        }
    }
    return count;
}
int flip(int n)
{
    int i=0,n2,j,k=0;
    n2=n;
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    int a[i],i2=i;
    for(j=0;j<i;j++)
    {
        a[j]=n2%10;
        n2/=10;
        k=k+(a[j]*pow(10,i2-1));
        i2--;
    }
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000000)
    printf("%d",palin(n));
}

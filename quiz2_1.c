#include <stdio.h>
int main()
{
    int n,positoin,count,str=2,cupefee,i=1;
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        cupefee=pow(str,3);
        if(i%cupefee!=0)
            count++;
        if(i>cupefee)
         str++;
    }
    if(n%cupefee==0)
        printf("Not Cube Free");
    else
        printf("%d",count);
}

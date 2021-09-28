#include <stdio.h>

int main()
{
    float i,n,sum=0,f=1;
    printf("enter the number:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+i/f;
    }
    printf("sum:%f",sum);

    return 0;
}
